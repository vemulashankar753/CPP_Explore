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
  
    int value[20];
    
    for(int i=0;i<20;i++){
        value[i]  = i;
    }
    
    std::atomic<int*> x (value); //points to the 1st element of the array
    cout << "the value of atomic pointer is: " << *x << endl;
    
    int *previos_val_x1  = x.fetch_add(12);
    
    cout << "the value of previous pointer is: " << *previos_val_x1 << endl;
    cout << "the value of atomic pointer is: " << *x << endl;
    
    int *previos_val_x2  = x.fetch_sub(10);
    
    cout << "the value of previous pointer after fetch_sub is: " << *previos_val_x2 << endl;
    cout << "the value of atomic pointer is: " << *x << endl;
    
    x++;
     cout << "the value of atomic pointer after post/pre increment is: " << *x << endl;
    
    x--;
    cout << "the value of atomic pointer after pre/post decrement is: " << *x << endl;

    return 0;
 
}
    


