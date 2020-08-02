
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
    
    cout << "is atomic pointer lock free : " << (x.is_lock_free() ? "true" : "false") << endl;
    
    cout << "the value of atomic pointer is: " << *x << endl;
    
    int *y = value+3;

    x.store(y);
    
    cout << "the value of atomic pointer is after store: " << *x << endl;
    
    cout << "the value of atomic pointer is with load : " << *(x.load()) << endl;
    
    int *b = value+3;
  
    int *rpcval = value+4;
    
    bool rtvalue = x.compare_exchange_weak(b, rpcval);
    
     cout << "the return value of the compare and exchange : " << (rtvalue ? "true" : "false") << endl;
    
    cout << "the value of atomic pointer is after compare and exchange: " << *x << endl;
    

    return 0;

    
}
