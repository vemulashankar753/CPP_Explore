//
//  Human.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 5/24/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//

#include <stdio.h>
#include "MyStrSize.hpp"

class Human{
private:
    int age;
    bool Gender;
    MyStrSize name;
    
public:
    Human(int a, bool gen,const MyStrSize& InputName):age(a),Gender(gen),name(InputName){
    }
    int GetAge(){
     return age;
    }
};
    

