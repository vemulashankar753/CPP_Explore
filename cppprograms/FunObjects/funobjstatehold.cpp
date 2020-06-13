//
//  funobjholdstate.cpp
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

//Unary Function Object
template <typename T>
struct DisplayEle{
    int count;
    DisplayEle():count(0){
    }
    void operator()(const T& t){
        count++;
        cout << t << " ";
    }
};

int main(){
    vector<int> v1;
    for(int i =0;i<10;++i){
        v1.push_back(i);
    }
    
    DisplayEle<int> Result;
    //for_each(v1.begin(), v1.end(),FunDisplayEle<int>()); //Using Just a function
    Result = for_each(v1.begin(), v1.end(),DisplayEle<int>()); //Using Function Object;
    
    cout << "No. of elements in that vector is" << Result.count << endl;

    
   // Result = for_each(v1.begin(), v1.find(3),DisplayEle<int>()); //Using Function Object;
    
  //  cout << "Till element 3 in that vector is" << Result.count << endl;
    return 0;
}


