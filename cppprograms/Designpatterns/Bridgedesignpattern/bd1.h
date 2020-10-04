//
//  Person.hpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 9/26/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class Person{
public:
    
    string name;
    
    class PersonImpl;
    PersonImpl* impl;
    Person();
    ~Person();
    void greet();
    
//Instead of the having the above innner class, we can have a functions which implement the code in private section, but when the code is shipped, as hte user has access to the private section, he can modify that, but because of above innerclass declaration, they cannot see the implementation.*//
//private:
    
    //void secrets();
};



