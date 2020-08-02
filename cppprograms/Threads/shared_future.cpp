//
//  shared_futurefile.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 7/31/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//
#include <iostream>
#include <thread>
#include <future>
#include <string>

using namespace std;

void printdata(std::shared_future<int>& fr){
    cout << "The Thread id: is " <<std::this_thread::get_id() << endl;
    cout << "print value: " << fr.get() << endl;
}

int main(){
    std::promise<int> p;
   /* std::future<int> f = p.get_future();  This will give an error/excpetion, as 2nd thread cannot access f.get. ie. once the f.get() is called by one thread, future will become invalid */
    std::shared_future<int> f = p.get_future();
    
    std::thread t1(printdata,std::ref(f));
    std::thread t2(printdata,std::ref(f));
    
    p.set_value(20);
    
    t1.join();
    t2.join();
    
    
    return 0;
    
}


