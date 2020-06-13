//
//  FunObj.cpp
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

//Unary Function
template <typename T>
void FunDisplayEle(const T& t){
    cout << t << " ";
}
//Unary Function Object
template <typename T>
struct DisplayEle{
    void operator()(const T& t){
        cout << t << " ";
    }
};

int main(){
    vector<int> v1;
    for(int i =0;i<10;++i){
        v1.push_back(i);
    }
    //for_each(v1.begin(), v1.end(),FunDisplayEle<int>()); //Using Just a function
    for_each(v1.begin(), v1.end(),DisplayEle<int>()); //Using Function Object;
    
    list<char> l1;
    
    for(char ch = 'a'; ch < 'k' ; ++ch){
        l1.push_back(ch);
    }
    
    for_each(l1.begin(),l1.end(),DisplayEle<char>());
    
    //Using Lamda Expression, Lamda is nothing but unnamed fucntion objects.
    for_each(v1.begin(), v1.end(), [](int& ele){cout << ele << " ";});
    
    return 0;
    
}

