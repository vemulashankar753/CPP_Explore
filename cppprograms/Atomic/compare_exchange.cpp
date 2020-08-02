//
//  atomicflag1.cpp
//  
//
//  Created by Shankar Vemula on 8/1/20.
//

#include <iostream>
#include <thread>
#include <atomic>
#include <iomanip>

using namespace std;

int main(){
  
    std::atomic<int> x(20);
    int expectedvalue = 5;
    
    bool r = x.compare_exchange_weak(expectedvalue,6);
    
    cout << "The operation is successful: " << (r ? "yes" : "no") <<  endl;
     cout << "Current expected value : " << expectedvalue << endl;
    cout << "The value of x after compare and exchange : " <<x.load() << endl;
    
    
    std::atomic<int> y(20);
    int expectedvalue1 = 20;
    
    bool s = y.compare_exchange_weak(expectedvalue,6);
    
    cout << "The operation is successful: " << (s ? "yes" : "no") <<  endl;
     cout << "Current expected value : " << expectedvalue1 << endl;
    cout << "The value of x after compare and exchange : " <<y.load() << endl;

    return 0;

    
}
    


