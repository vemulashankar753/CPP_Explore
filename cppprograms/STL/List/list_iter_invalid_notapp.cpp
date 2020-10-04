//
//  Listiteratioin_validationcheck.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 9/13/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//


#include <iostream>
#include <list>

using namespace std;

int main(){
    
    std::list<int> l1;
    l1.push_back(1);
    l1.push_back(2);
    l1.push_back(4);
    l1.push_back(7);
    l1.push_back(8);
    
    auto it1 = l1.begin();
    
    auto it2 = next(it1,3);

    
    cout << "value of it1: " << *it1 << endl;
    cout << "value of it2: " << *it2 << endl;
    
    l1.insert(l1.begin(),5);
    
    cout << "value of it1: " << *it1 << endl;
    cout << "value of it2: " << *it2 << endl;
    
    auto it3 = l1.begin();
    
     cout << "value of it3: " << *it3 << endl;
 
    
    return 0;
}

