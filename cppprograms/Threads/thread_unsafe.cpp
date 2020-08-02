

// Before join there is an runtime exception thrown , so join will be skipped, it will cause program to exit unsafely.

#include <iostream>
#include <thread>
#include <string>

using namespace std;


void FunctionA(){
    std::this_thread::sleep_for(std::chrono::milliseconds(5000));
    cout << "This is A function" << endl;
};

void otherOperations(){
    cout << "This is Operations function" << endl;
    throw std::runtime_error("this is runtime error");
};

int main(){
    std::thread t1(FunctionA);
    otherOperations();
    cout << "After the detach" << endl;
    t1.join();
    cout << "After the join" << endl;
    //fix for this:
   /* try { // This is also not a good practice
        otherOperations();
        cout << "After the detach" << endl;
        t1.join()
        
    }catch(...){
        t1.join
    } */
    ;
    
    

    return 0;
}

