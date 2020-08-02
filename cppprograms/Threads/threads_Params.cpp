//
//  Thread_Parameters.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 7/18/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//

#include <iostream>
#include <thread>
#include <string>

using namespace std;


void Fun1(int x, int y){
   
    cout << "X and Y values are:" << x << ":  " << y << endl;
};

void Fun2(int &x){
    while(1){
        cout << "X value is: " << x << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
        
};


int main(){
    int a=10, b=20;
    //pass by value from threads
    std::thread t1(Fun1,a,b);
    
    t1.join();
    
    int x = 40;
    
    std::thread t2(Fun2,std::ref(x));
    std::this_thread::sleep_for(std::chrono::milliseconds(5000));
    
    x = 50;
    cout << "Thread t2 join is called " << endl;
    t2.join();
    
    return 0;
}
    

