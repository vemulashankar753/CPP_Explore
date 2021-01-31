#include<iostream> 
using namespace std; 
  
class Base 
{ 
public: 
    void show() 
    { 
        cout<<" In Base "; 
    } 
}; 
  
class Derived: public Base 
{ 
public: 
    int x; 
    void show() 
    { 
        cout<<"In Derived "; 
    } 
    Derived() 
    { 
        x = 10; 
    } 
}; 
  
int main(void) 
{ 
    Base *bp, b; 
    Derived d; 
    bp = &d; 
    bp->show(); //It calls the show() method of the base class, if we add virtual , then it will the derived class object 
//    cout << bp->x;     
    return 0; 
} 

