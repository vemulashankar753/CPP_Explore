//
//  Thread_Mutex.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 7/23/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.

#include <iostream>
#include <thread>
#include <string>
#include <mutex>
#include <list>

std::list<int> li;
std::mutex m;

/*void addtothelist(int const& x){
    m.lock();
    li.push_front(x);
    m.unlock();
}*/

void addtothelist(int const& x){
    std::lock_guard<std::mutex>  l(m);
    li.push_front(x);
   
}

using namespace std;

int main(){
    std::thread t1(addtothelist,5);
    std::thread t2(addtothelist,1);
    
    t1.join();
    t2.join();
    for(auto it: li){
        cout << it << endl;
    }
    
    cout << "the size of the list is: " << li.size() << endl;
    
    return 0;
    
}


