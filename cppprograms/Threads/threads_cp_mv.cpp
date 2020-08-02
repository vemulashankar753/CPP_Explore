//
//  Thread_Cpy.cpp
//  CPP_Learning
//
#include <iostream>
#include <thread>

using namespace std;

void foo(){
    cout << "foo is called: " << endl;
}

void bar(){
    cout << "Bar is called" << endl;
}

int main(){
    std::thread t1(foo);
    
    //std::thread t2 = t1; //This gives an error., 
    
    std::thread t2 = std::move(t1); //
    
   // t1.join(); //terminating with uncaught exception of type std::__1::system_error: thread::join failed: Invalid argument
    t2.join();
    
    std::thread t3;
    
    t3 = std::thread(bar); //Move assignment Operator is called
    
    t3.join();
    
}

