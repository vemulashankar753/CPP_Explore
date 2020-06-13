//
//  DefFunArgs.cpp
//  CPPTest
//
//  Created by Shankar Vemula on 5/12/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

//After the default args, there should not be normal args.
//int sum(int x=0, int y=1, int z=10, int a)

int sum(int x, int y=1, int z=10, int a=0){
    return (x+y+z+a);
}

int add(int x, const int y= 0, int z=7){
    return (x+y+z);
}



int main(){
  cout << sum(5) << endl;
  cout << sum(5,4) << endl;
  cout << sum(5,4,3,2) << endl;
    cout << add(5) << endl;
    cout << add(5,8) << endl; // Here x is assgined with 5, and z is assigned with 8
    
    return 0;
}

