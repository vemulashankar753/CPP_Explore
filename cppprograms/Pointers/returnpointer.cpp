//
//  pointer_passbyreference.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 9/12/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//
#include <iostream>

using namespace std;

int *createarray(int n, int a){
    int* array {nullptr};
    array = new int[n];
    for(int i=0;i<n;++i){
        *(array+i) = a;
    }
    return array;
};

void display(int* a,int n){
    for(int i=0;i<n;i++){
        cout << "array values: " << *(a+i) << endl;
    }
}
int main(){
    
    int *a {nullptr};
    int size = 10;
    int initvalue = 100;
    a = createarray(size,initvalue);
    display(a,10);
    
    delete[] a;

    return 0;
}
    

