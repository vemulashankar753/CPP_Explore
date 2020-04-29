/*
 * MainFile.cpp
 *
 *  Created on: Apr 24, 2020
 *      Author: svemul200
 */

#include  <iostream>
#include <vector>
#include "MyString.h"

using namespace std;

//using namespace std;

int main(){

//  MyString a;
//  MyString b("Hello");
//  b.display();
//  //MyString c{"nullptr"};
//  MyString d = b; //copy constructor is called.
//  d.display();
//
//  MyString e;
//  e = d; //Copy Assigment Constructor/ =operator overloading is called.
//  e.display();
//  MyString f;
//  f = "shankar vemula"; //.operator= method is called now, temporary object
// f.display();
    
    MyString m1;
    m1 = "ShankarVemula"; //Copy Assigment operator called.
    std::vector<MyString> vm;
    vm.push_back("Comcast"); //Copy Constructor is called // IF MOVE CONSTRUCTOR IS THERE, MOVE CONSTRUCTOR IS CALLED OTHERWISE COPY CONSTRUCTOR IS CALLED
    vm.push_back("Infosys");
    vm.push_back("SubCon");
    
    MyString m2 {"HelloWorld"}; //Overloaded Constructor is called.
    m2.display();
    m2 = m1;
    m2.display();
    
    cout << "Iterating through vm objects" << endl;
    for(const MyString& s: vm){
        s.display();
    }

    cout << "Reassignnig data to  vm objects" << endl;
     for(MyString& s: vm){
         s = "new Changed"; //Copy Assigment Operator is called
     }
    
    cout << "iterating through new vm objects" << endl;
    for(const MyString& s: vm){
        s.display();
    }

    MyString m4 ;
    m4 = MyString("Shankar"); //Overloaded const. is called, then Move Assignment Operator is called.
    m4 = "Comcast"; //Move constructor is called;
    std::vector<MyString> vm;
    vm.push_back("Comcast"); //Move  Constructor is called
    vm.push_back("Infosys");
    vm.push_back("SubCon");


     MyString m3 = "shankarvemula";
    MyString m4 = std::move(m3); //MOVE CONSTRUCTOR IS CALLED



   


};






