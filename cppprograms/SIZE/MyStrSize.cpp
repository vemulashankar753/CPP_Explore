//
//  MyStrSize.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 5/24/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//

#include "MyStrSize.hpp"

#include <iostream>


MyStrSize::MyStrSize(char* buff){
    if(buff !=NULL){
        buffer = new char[sizeof(buff)+1];
        strcpy(buffer,buff);
    }else{
        buffer = NULL;
    }
}

MyStrSize::MyStrSize(const MyStrSize& source){
    
    if(source.buffer != NULL){
        buffer  = new char[strlen(source.buffer)+1];
        strcpy(buffer,source.buffer);
    }else{
        buffer = NULL;
    }
}

MyStrSize::~MyStrSize(){
    if(buffer != NULL){
        delete[] buffer;
    }
}

int MyStrSize::GetLength(){
    return strlen(buffer);
}

const char* MyStrSize::GetString(){
    return buffer;
}



