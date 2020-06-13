//
//  MyStrSize.hpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 5/24/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//

#ifndef MyStrSize_hpp
#define MyStrSize_hpp

#include <stdio.h>
#include <cstring>
#include <iostream>

class MyStrSize{
    
private:
    char *buffer;
    
public: 
    
    MyStrSize(char* );
    MyStrSize(const MyStrSize& m);
    ~MyStrSize();
    int GetLength();
    const char* GetString();
};

#endif /* MyStrSize_hpp */

