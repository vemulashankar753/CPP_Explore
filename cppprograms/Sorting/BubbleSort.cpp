//
//  BubbleSort.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 5/30/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//
#include <iostream>
#include <string>

using namespace std;

void interchange(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int n;
    cout << "Enter no. of elements you want to sort" << endl;
    
    cin >> n;
    
    int a[n];
    
    for (int i= 0;i<n;i++){
        cin >> a[i];
    }

   int innerswap = 0;
    
    for(int i= 0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j] > a[j+1])
                interchange(a[j], a[j+1]);
                innerswap = 1;
        }
       
        // This is an optimized bubble sort solution which ensures that if the input array is already sorted, to reduce teh further comparisions are swaps
        if(innerswap == 0){
          break; //out of main loop
        }
        
        cout << "After each pass: " << i << endl;
       /* for (int i= 0;i<n;i++){
            cout << a[i] << " ";
        } */
        
    }
    
    for (int i= 0;i<n;i++){
           cout << a[i] << endl;
    }
    
    return 0;
    
}
    

