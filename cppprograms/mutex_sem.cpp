#include <iostream>
#include <string>
#include <thread>
#include <condition_variable>
#include <mutex>
#include <random>
#include <queue>
#include <cstddef>

std::mutex mtx;
std::condition_variable cv;

using namespace std;


int main(){

  std::mutex mtx;
  std::condition_variable cv;
  std::queue<int> intq;
  bool stopped = false;

  //thread is created using a function object

  std::thread producer{[&](){

    std::default_random_engine gen{};
    std::uniform_int_distribution<int> dist{};

    std::size_t count = 40;

    while(count--){

       std::lock_guard<std::mutex> l{mtx};
       std::cout << "Producer pushed: " << count << endl;
    
       intq.push(count);

       //Tell consumer it has an int
       cv.notify_one(); //another method also notify_all;

    }
       

    //all done

       std::lock_guard<std::mutex> l{mtx};
       cout << "Producer is done" << endl;

       stopped = true;
       cv.notify_one();
   }};


  std::thread consumer{[&](){

     do{
          std::unique_lock<std::mutex> l(mtx);
          cv.wait(l,[&]()
          {
            return stopped || !intq.empty();
          });
 
          while(!intq.empty()){

            const auto val = intq.front();
            intq.pop();

            std::cout << "consumer popped: " << val <<  endl;

          }

          if (stopped){

            std::cout << "consumer done" << endl;
            break;
          }

     }while(true);
 
  }};

  consumer.join();
  producer.join();

  return 0;


}






       
    





