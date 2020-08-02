//
//  future_asyn.cpp
//  
//
//  Created by Shankar Vemula on 7/31/20.
//

#include <iostream>
#include <thread>
#include <future>

using namespace std;

void printing(){
    std::cout << "this is the printing sub thread id: " << std::this_thread::get_id() << endl;
}

int addition(int a, int b){
    std::cout << "this is the addition sub thread id: " << std::this_thread::get_id() << endl;
    return a+b;
}

int substraction(int a, int b){
    std::cout << "this is the substraction sub thread id: " << std::this_thread::get_id() << endl;
    return a-b;
}

int main(){
    
    std::cout << "this is the main thread id: " << std::this_thread::get_id() << endl;
    
    int x = 100;
    int y = 50;
    
    std::future<void> f1 = std::async(std::launch::async,printing); // This will run the async task in a new thread as launch policy is "async"
    std::future<int> f2 = std::async(std::launch::deferred,addition,x,y);
    std::future<int> f3 = std::async(std::launch::deferred | std::launch::async ,substraction,x,y);// Here compiler will decide whether to create a new thread or when f3.get is called
                    //result will be writtern
    
    f1.get();
    cout << "Addition result :" << f2.get() << endl;
    cout << "Substraction result :" << f3.get() << endl;
    
    return 0;
    
}

/**output 

this is the main thread id: 0x1000f5dc0
this is the substraction sub thread id: 0x700004c35000
this is the printing sub thread id: 0x700004bb2000
Addition result :this is the addition sub thread id: 0x1000f5dc0
150
Substraction result :50
Program ended with exit code: 0 **/

