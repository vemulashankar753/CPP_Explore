//
//  UnaryPdct.cpp
//  CPPTest
//
//  Created by Shankar Vemula on 5/10/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//

//This is an example of fun object to store information

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

//Unary Predicate
template <typename T>
struct IsMutliple{
    int divisor;
    IsMutliple(T &t):divisor(t){
        cout << "Divisor value is: " <<divisor <<endl;
    }
     bool operator()(T& t){
        
         return (t%divisor == 0);
    }
};

int main(){
    vector<int> v1;
    for(int i =23;i<35;++i){
        v1.push_back(i);
    }
    int div;
    cout << "Enter the value of the divisor dynamicallly" << endl;
    cin >> div;
    
    auto iElement = find_if(v1.begin(),v1.end(),IsMutliple<int>(div));
    
    if(iElement != v1.end()){
        cout << "First element in vector divisible by divisor is " << *iElement << endl;
    }
    
    return 0;
}
