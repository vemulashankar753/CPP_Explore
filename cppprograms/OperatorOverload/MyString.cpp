//
//  MyString.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 4/25/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//


#include <cstring>
#include <iostream>
#include "MyString.h"

using namespace std;

MyString::MyString(): //No args constructor
    s{nullptr}{
       s = new char[1];
       *s = '\0';
       std::cout << "default constructor is called" << std::endl;
}

//Overloaded Constructors
MyString::MyString(const char *str):
        s(nullptr){

    std::cout << "overloaded constructor is called" << std::endl;

    if(str == nullptr){
        s = new char[1];
        *s = '\0';

    }else{
        s = new char[std::strlen(str)+1];
        std::strcpy(s,str);

    }
}

//Copy Constructor
MyString::MyString(const MyString& source):
    s(nullptr){
    std::cout << "copy constructor is called" << std::endl;
    s = new char[std::strlen(source.s)+1];
    std::strcpy(s,source.s);
}

//Move Constructor
MyString::MyString(MyString &&source):
        s(source.s){
        source.s = nullptr;
        cout << "Move Constructor is used" << endl;
}
        
//Copy Assignment Operator Overloading
MyString& MyString::operator=(const MyString &rhs){
        cout << "Copy Assignment operator overloading is called"  << endl;
        if(this == &rhs){ //This is to ensure that P1 = p1 (same object is assignmented to an object)
          return *this;
        }
        
        delete[] s;// or delete[] this->s;
        s = new char[strlen(rhs.s)+1];
        std::strcpy(s,rhs.s);
        return *this;
}
        
//Move Assignment Operator Overloading
MyString& MyString::operator=(MyString &&rhs){
        cout << "Move Assignment operator overloading is called"  << endl;
        if(this == &rhs){
           return *this;
        }
        
        delete[] s;
        s = rhs.s; //Steal the pointer from the right side object and assign it to this. this->s
        rhs.s = nullptr;
        return *this;
        
}
        
        

MyString::~MyString(){
    std::cout << " destructor is called" << std::endl;
    delete[] s;
}
        
void MyString::display() const{
    std::cout << "the value of str is: " << s <<  "   length of string:  " << get_length() << std::endl;

}

int MyString::get_length() const{
    return int(std::strlen(s));
}










