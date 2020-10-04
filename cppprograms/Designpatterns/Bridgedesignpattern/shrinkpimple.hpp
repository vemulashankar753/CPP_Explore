//
//  Person.hpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 9/26/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//

#include <iostream>
#include <string>
#include <memory>

using namespace std;
template <typename T>
class Pimpl{
private:
    std::unique_ptr<T> impl;
    
public:
    
    string name;
 
    Pimpl();
    ~Pimpl();
    
    ///Constructor with varialbe no. of args
    template <typename ...Args> Pimpl
    (Args&& ...args);
    
    T* operator->();
    T& operator&();
    
   
    

};



