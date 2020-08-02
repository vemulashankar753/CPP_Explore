#include <iostream>
#include <thread>
#include <atomic>

using namespace std;

int main(){
    
    std::atomic_flag flag1 = ATOMIC_FLAG_INIT;
    
    cout << "1.Previous value of the atomic flag is: " << flag1.test_and_set() << endl;
    cout << "2.Previous value of the atomic flag is: " << flag1.test_and_set() << endl;
    
    flag1.clear();
    
    cout << "2.Previous value of the atomic flag is: " << flag1.test_and_set() << endl;
    
    return 0;
    
}
