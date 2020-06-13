//
//  main1.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 5/24/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//
#include "Human.h"
#include <iostream>
#include <string>

using namespace std;

class A{
    
};

int main(){
    
    MyStrSize m1 {"shankar"};
    MyStrSize m2 {"Madhavi"};
    
    cout << "string is: " << m1.GetString() << "length is: " << m1.GetLength() << endl;
    cout << "string is: " << m2.GetString() << "length is: " << m2.GetLength() << endl;
    
    cout << "Size of(MyStrSize): " << sizeof(MyStrSize) << endl;
    cout << "Size of(m1): " << sizeof(m1) << endl;
    cout << "Size of(m2): " << sizeof(m2) << endl;
    
    Human h1(35,false,m1);
    Human h2(34,true, m2);
    
    cout << "Size of(Human): " << sizeof(Human) << endl;
    cout << "Size of(h1): " << sizeof(h1) << endl;
    cout << "Size of(h2): " << sizeof(h2) << endl;
    
    cout << "Size of a empty class: " << sizeof(A) << endl;
    
    return 0;
    
} 


/****outpt
string is: shankarlength is: 7
string is: Madhavilength is: 7
Size of(MyStrSize): 8
Size of(m1): 8
Size of(m2): 8
Size of(Human): 16
Size of(h1): 16
Size of(h2): 16
Size of a empty class: 1 
***/
