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
  
    std::atomic<bool> x(true);
    
    cout << "Atomic boolean is implemented using a non-atomic flag, is it a lock "
    << (x.is_lock_free()? "yes" : "no") << endl;
    
    std::atomic<bool> y(true);
    
    //Store operations
    x.store(false); //store called with non-atomic value
    x.store(y); // Store is called with atomic value
    
    //Load operations
    cout << "value of teh atomic bool y " << y.load() << " in booleans: " << std::boolalpha << y.load() << endl;
    
    //exchnage operation
    bool z = x.exchange(false);
    
    cout << "current value of the atomic bool x " << x.load() << endl;
    cout << "previous  value of the atomic bool z " << z << endl;
    
    
    return 0;
    
}
    


