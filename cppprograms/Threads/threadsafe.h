//
//  Threadjoinsafe1.hpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 7/18/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//

#ifndef Threadjoinsafe1_h
#define Threadjoinsafe1_h
#include <iostream>
#include <thread>
using namespace std;

class threadsafe{
private:
    std::thread t1;
public:
    explicit threadsafe(std::thread& t): t1(t){ // Here explicit key word is to avoid implicit constructor
        cout << "Parameter constructor is called" << endl;
    }
    
    threadsafe( const threadsafe &  ) = delete; //This is to avoid creating a copy constructor
    threadsafe& operator=(const threadsafe & ) = delete; //This is to avoid create Assignment Operator overlaoding
    
    ~threadsafe(){
        if(t1.joinable()){
            t1.join();
        }
    }
    
};

#endif /* Threadjoinsafe1_hpp */

