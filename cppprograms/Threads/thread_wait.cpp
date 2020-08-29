#include <iostream>
#include <condition_variable>
#include <thread>
#include <chrono>
#include <queue>
 
//using namespace std;

std::condition_variable cv;
std::mutex m1; // This mutex is used for three purposes:

using namespace std;

int i= 0;
std::queue<int> q;

int n = 10;
void printqueue(){
    std::unique_lock<std::mutex> l(m1);
    cv.wait(l);
//    cv.wait(l, []{return i == 1;});
    cout << "the queue elements are:  " << q.front() << endl;
    q.pop();

};

void pushdata(){

    std::lock_guard<std::mutex> l(m1);
    while(n--){
        q.push(n);
    }
    i = 1;
    cv.notify_one();
}
int main(){
    
    cout << "this is shankar" << endl;
    
    std::queue<int> q;
    
    std::thread t1(printqueue);
    std::thread t2(pushdata);
    
    t1.join();
    t2.join();
    
    return 0;
}


