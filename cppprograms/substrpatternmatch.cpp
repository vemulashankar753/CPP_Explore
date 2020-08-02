//
//  str.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 7/27/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//
#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main(){
    
    std::string main,pattern;
    cout << "Enter the main string" << endl;
    getline(cin,main);
    cout << main << endl;
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Enter the pattern string" << endl;
    getline(cin,pattern);
    cout << pattern << endl;
    int match = 0;
    
    while(main.length() >= pattern.length()){
        string sub = main.substr(0,pattern.length());
        cout << "sub strin extrac: " << sub << endl;
        if(sub.compare(pattern) == 0){
            match++;
        }
        main = main.substr(1,main.length());
        cout << "main after erasing: "<< main << endl;
    }
    
    cout << "no. of matches are: " << match << endl;
    
    return 0;
}
    
