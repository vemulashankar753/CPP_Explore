://
//  future_Promise.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 7/31/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.

#include <iostream>
#include <thread>
#include <future>
#include <functional>
#include <stdexcept>
#include <chrono>

using namespace std;

void printthread(std::future<int>& f){
    cout << "This thread id value: " << std::this_thread::get_id() << endl;
    cout << "Waiting for the value from the main thread " << endl;
    cout << "Future return value: " << f.get() << endl;
}

int main(){
    
    std::promise<int> prom; //Create a promise object
    std::future<int> fpro = prom.get_future();
    
    std::thread t1(printthread, std::ref(fpro));
    
    std::this_thread::sleep_for(std::chrono::milliseconds(5000));
    
    cout << "Setting the value in the main thread : " << endl;
    prom.set_value(10);
    
    t1.join();
    
    /** If we do like , set_value is called after the join, then it will be dead lock situration, here main thread will wait for t1 thread to finish, whereas t1 will wait for promise to set value , so its a dead lock*/
 
}
