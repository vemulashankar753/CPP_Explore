//
//  pointer_passbyreference.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 9/12/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//
#include <iostream>

using namespace std;

void swapdata(int* v1, int* v2){
    int temp = *v1;
    *v1 = *v2;
    *v2 = temp;
}

int main(){
    
    int a=10,b =20;
    cout << "Before swap: a:" << a << " value of b: " << b << endl;
    swapdata(&a,&b);
    cout << "After swap: a:" << a << " value of b: " << b << endl;
    int *a1 {nullptr},*a2 {nullptr};
    a1 = new int;
    a2 = new int;
    *a1 = 100;
    *a2 = 200;
     cout << "Before swap: a1:" << *a1 << " value of a2: " << *a2 << endl;
    swapdata(a1,a2);
    cout << "After swap: a:" << *a1 << " value of b: " << *a2 << endl;
    return 0;
    
}
    

