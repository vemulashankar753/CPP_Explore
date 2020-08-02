//
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
#include <exception>
#include <math.h>

using namespace std;

void throw_exception(){
    throw "invalid valid";
};

void printthread(std::future<int>& f){
    cout << "This thread id value: " << std::this_thread::get_id() << endl;
    cout << "Waiting for the value from the main thread " << endl;
    cout << "Future return value: "  << endl;
    try {
        int x = f.get();
        std::cout << "int value: " << x << endl;
        
    }catch(std::exception& e){
        std::cout << "Exception caught: " << e.what() << endl;
    }
    };

void calculate_square_root(std::promise<int>& p){
    cout << "Calculate square root trhead in promise:" << endl;
    int x = 1;
    std::cout << "Please, enter the value: " ;
    try {
        std::cin >> x;
        if(x <= 0){
            throw_exception();
        }
        p.set_value(x*x);
    }catch(std::exception& e){
        p.set_exception(std::current_exception());
    }
    
    };

int main(){
    
    std::promise<int> prom; //Create a promise object
    std::future<int> fpro = prom.get_future();
    
    std::thread t1(printthread, std::ref(fpro));
    std::thread calculation_thread(calculate_square_root,std::ref(prom));
    
    t1.join();
    calculation_thread.join();
        
   return 0;
    
    
    
    /** If we do like , set_value is called after the join, then it will be dead lock situration, here main thread will wait for t1 thread to finish, whereas t1 will wait for promise to set value , so its a dead lock*/
 
}

