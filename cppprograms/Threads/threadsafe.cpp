//
//  Threadjoinsafe1.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 7/18/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//
//This is using the RAII , WE are having better joining mechanism for threads

#include "Threadjoinsafe1.h"
void FunctionA(){
    std::this_thread::sleep_for(std::chrono::milliseconds(5000));
    cout << "This is A function" << endl;
};

void otherOperations(){
    cout << "This is Operations function" << endl;
    throw std::runtime_error("this is runtime error");
};

int main(){
    std::thread thr(FunctionA);
    threadsafe tg(thr);
    try{
        otherOperations();
    }catch(...){
        
    }

    return 0;
}

