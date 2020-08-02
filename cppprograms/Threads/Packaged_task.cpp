//
//  future_asyn.cpp
//  
//
//  Created by Shankar Vemula on 7/31/20.
//

#include <iostream>
#include <thread>
#include <future>
#include <functional>
#include <numeric>


using namespace std;



int addition(int a, int b){
    std::cout << "this is the addition sub thread id: " << std::this_thread::get_id() << endl;
    return a+b;
}

void task_thread(){
    std::packaged_task<int(int,int)> addptask(addition);
    std::future<int> f1 = addptask.get_future();
    std::thread t1 (std::move(addptask),5,6);
    t1.detach();
    std::cout << "task thread " << f1.get() << endl;
    
}

void task_normal(){
    std::packaged_task<int(int,int)> addptask(addition);
    std::future<int> f1 = addptask.get_future();
    addptask(7,8);
    cout << "Task normal : " << f1.get() << endl;
}



int main(){
    
    std::cout << "this is the main thread id: " << std::this_thread::get_id() << endl;
    
    task_normal();
    task_thread();
    
    return 0;
    
    
    
}
/**
this is the main thread id: 0x1000e8dc0
this is the addition sub thread id: 0x1000e8dc0
Task normal : 15
task thread this is the addition sub thread id: 0x700008c22000
11
Program ended with exit code: 0 **/
