//
//  Person.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 9/26/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//

#include "Person.hpp"

class Person::PersonImpl{
public:
    void greet(Person *p);
};

void Person::PersonImpl::greet(Person* p){
    cout << "Hello person name is" << p->name << endl;
    
};
Person::Person():impl(new PersonImpl){
    
}

Person::~Person(){
    delete impl;
}

void Person::greet(){
    cout << "Person greet is calling" <<  endl;
    impl->greet(this);
}

