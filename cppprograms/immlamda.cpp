#include <iostream>

using namespace std;

int fun(int a){
    return a+10;
}

int main(){
    
    auto sum = [&](int a , int b, int c){

        cout << "sum called: " << a << endl;
        int localsum = a+b;
        int remotesum = fun(a);
        return localsum+remotesum;
    };
    
    int a = sum(1,2,3);
    int b = sum(2,3,4);
    int c = sum(3,4,5);
    
    cout << "value a: " << a  << "value of b" << b << "value of c:" << c << endl;
    return 0;
}

