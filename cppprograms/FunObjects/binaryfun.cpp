//
//  BinaryFunction.cpp
//  CPPTest
//
//  Created by Shankar Vemula on 5/10/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

//Unary Predicate
template <typename eType>
class Mutliply{
public:
    eType  operator()(const eType& e1, const eType& e2){
         return (e1*e2);
    }
};
template <typename T>
void DisplayContents(const T& t){
    for(auto it = t.begin(); it !=t.end();++it){
        cout << *it << endl;
    }
}

int main(){
    vector<int> v1,v2;
    for(int i =0;i<10;++i){
        v1.push_back(i);
    }
    
    for(int i= 100;i<110;++i){
        v2.push_back(i);
    }
//     8c75uy dby6
    vector<int> v3;
    v3.resize(10);
    
    transform(v1.begin(),v1.end(),v2.begin(),v3.begin(), Mutliply<int>());
    
    cout << "the contents of the 1st vectors are" << endl;
    
    for(auto it= v1.begin();it != v1.end();++it){
        cout << *it << endl;
    }
    for(auto it= v2.begin();it != v2.end();++it){
        cout << *it << endl;
    }
//    for(auto it= v3.begin();it != v3.end();++it){
//        cout << *it << endl;
//    }
    
    DisplayContents(v3);
    
    return 0;
    
}
    
    
    
    

