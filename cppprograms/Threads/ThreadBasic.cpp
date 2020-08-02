//Threads will be launched in 3 ways.
/*
a) Function pointer
b) Function object
c) Function Lamda
 */

#include <iostream>
#include <thread>
#include <string>

using namespace std;

// Function pointer

void foo(int i){
    cout << "thread is called: " << i  << "thread id: " << std::this_thread::get_id() << endl;
};

class Funobj{
public:
    void operator()(){
        cout << "thread is called: "   << "thread id: " << std::this_thread::get_id() << endl;
    }
};


int main(){
    
    std::thread t1(foo,3);
    Funobj fo;
    std::thread t2(fo);
    std::thread t3([](){
        cout << "thread is called using lamda" << "thread id: " << std::this_thread::get_id() << endl;
    });
    
    t1.join();
    t2.join();
    t3.join();
    
    return 0;
    
}

