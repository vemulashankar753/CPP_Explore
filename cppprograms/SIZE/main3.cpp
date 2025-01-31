//
//  main3.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 5/24/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//

#include <iostream>
using namespace std;
   
class Empty
{};
   
class Derived1 : public Empty
{};
   
class Derived2 : virtual public Empty
{};
   
class Derived3 : public Empty
{
    char c;
};
   
class Derived4 : virtual public Empty
{
    char c;
};
   
class Dummy
{
    char c;
};
   
int main()
{
    cout << "sizeof(Empty) " << sizeof(Empty) << endl;
    cout << "sizeof(Derived1) " << sizeof(Derived1) << endl;
    cout << "sizeof(Derived2) " << sizeof(Derived2) << endl;
    cout << "sizeof(Derived3) " << sizeof(Derived3) << endl;
    cout << "sizeof(Derived4) " << sizeof(Derived4) << endl;
    cout << "sizeof(Dummy) " << sizeof(Dummy) << endl;
   
    return 0;
}

/*output**
sizeof(Empty) 1
sizeof(Derived1) 1
sizeof(Derived2) 8
sizeof(Derived3) 1
sizeof(Derived4) 16
sizeof(Dummy) 1 
********/

