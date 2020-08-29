#include <iostream>
#include <condition_variable>
#include <thread>
#include <chrono>
#include <queue>
#include <mutex>

std::condition_variable cv;
std::mutex m1; // This mutex is used for three purposes:

using namespace std;

int j= 0;
std::queue<int> q;

int n = 10;

void printeven(){
  while(!q.empty()){
    cout << "entering even function" << endl;
    std::unique_lock<std::mutex> l(m1);
    cv.wait(l, []{return j == 1;});
    int i = q.front();
    cout << "even printing: " << i << endl;
    q.pop();
    i = 0;
  }
}

void printadd(){
  while(!q.empty()){
   {
    std::lock_guard<mutex> lg(m1);
    int i = q.front();
    cout << "print odd: " << i << endl;
    j = 1;
    q.pop();
   }
    
    cv.notify_all();
  }
} 

int main(){
    
    cout << "this is shankar" << endl;
    
    while(n--){
        q.push(n);
    }
    
    std::thread t1(printadd);
    std::thread t2(printeven);
    
    t1.join();
    t2.join();
    
    return 0;
}


