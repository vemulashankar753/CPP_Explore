//
//  atomicflag1.cpp
//  
//
//  Created by Shankar Vemula on 8/1/20.
//

#include <iostream>
#include <thread>
#include <atomic>

using namespace std;

int main(){
  
    std::atomic<bool> flag1;
    cout << "flag1 value is = " << flag1 << endl;
    
    //Its not copy construtible
   // std::atomic<bool> flag2 (flag1);
    
    //Its not copy assignable.
    //std::atomic<bool> flag3 = flag1;
    
    bool nonatomicflag = true;
    //bool nonatmoicflag1 = true;
    
    std::atomic<bool> flag4(nonatomicflag);
     cout << "flag4 value is = " << flag4 << endl;
    
    //std::atomic<bool> flag5 = nonatomicflag1;
    //cout << "flag5 value is: " << flag5 << endl;
    
    return 0;
    
}
    


