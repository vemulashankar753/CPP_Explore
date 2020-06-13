//
//  Selecsort_Stable.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 5/30/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//

//** In stable selection sort, instead of swapping the elements immediately after comparision, first findout the min key in the given array then place it in the beginning. So this way we can 
achieve the stable selection sort**/

#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cout << "Enter no. of elements you want to sort" << endl;
    
    cin >> n;
    
    int a[n];
    
    for (int i= 0;i<n;i++){
        cin >> a[i];
    }
    

    
    for(int i= 0; i<n-1 ; i++){
        int min = i;
        for(int j= i+1;j<n;j++){
          
            if(a[min] > a[j]){
                min = j;
            }
        }
        
        int key  = a[min];
        
        while (min > i)
        {
                   a[min] = a[min - 1];
                   min--;
       }
        
        a[i] = key;
        
    }
    
    
    for (int i= 0;i<n;i++){
           cout  <<  a[i] << endl;
       }
    
    return 0;
    
}

