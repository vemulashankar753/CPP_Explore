
// Join blocks the execution of main thread till it completes, wheras Detach will not block the main thread, it allows the child thread to run independely.
#include <iostream>
#include <thread>
#include <string>

using namespace std;


void FunctionA(){
    std::this_thread::sleep_for(std::chrono::milliseconds(5000));
    cout << "This is A function" << endl;
};

void FunctionB(){
    cout << "This is B function" << endl;
};

int main(){
    std::thread t1(FunctionA);
    std::thread t2(FunctionB);
    t1.detach();
    cout << "After the detach" << endl;
    t2.join();
    cout << "After the join" << endl;

    return 0;
}

