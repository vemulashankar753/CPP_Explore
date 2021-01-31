#include <thread>
#include <mutex>
#include <iostream>
#include <string>
#include <condition_variable>

using namespace std;

std::mutex m;
int shared = 0;
int count = 1;

std::condition_variable cv;

/*void printodd(){
  while(count <= 20){
   std::unique_lock<mutex> l(m);
   cv.wait(l,[](){
                 return shared%2 == 0});
//   cout << "odd is : " <<  count << endl;
 //  count++; 
  }
};*/ 

void printeven(){
//  while(count <= 20){
   std::unique_lock<mutex> l(m);
  // cout << "even is : " <<  count << endl;
  // count++; 
   cv.notify_all();
 // }
}; 

int main(){

//  std::thread t2(printeven);
  std::thread t1(printodd);
  t1.join();
  //t2.join();

  return 0;

}
  
  

   
