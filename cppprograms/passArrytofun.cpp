//
//  PassArraytoFun.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 9/6/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//
//When passing array to a function, just pass same data type as array along with size
//as below

#include <iostream>

using namespace std;

void setArray(int a1[], size_t s,int setvalue){
    for(int i=0;i<s;++i){
        a1[i] = setvalue;
    }
};
/*
void setArray(const int a1[], size_t s,int setvalue){
    for(int i=0;i<s;++i){
        a1[i] = setvalue; //Readonly variable gives error, as array is constant
    }
}; */

void printArray(int a1[], size_t s){
    for(int i=0;i<s;++i){
        cout << a1[i] << endl;
    }
};

int main(){
    
    int a[] {1,2,3,4,5};
    printArray(a, 5);
    setArray(a,5,10);
    printArray(a, 5);

}

