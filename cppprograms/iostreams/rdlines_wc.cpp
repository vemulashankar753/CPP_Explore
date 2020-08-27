//
//  Read_file.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 8/22/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>
#include <iomanip>

using namespace std;

int main(){
    
    map<string,int> m1;
    
    //ifstream ifs("/Users/svemul200/Desktop/Shankar_Resume.docx",std::ifstream::in);
    ifstream ifs("/Users/svemul200/Desktop/storyfile.txt",std::ifstream::in);
    //ifs.open("/Users/svemul200/Desktop/Shankar_Resume.docx");
    if(!ifs){
        cout << "Error Opening the file" << endl;
    }
 
    string line;
    
    while(getline(ifs,line)){
        //cout << "Each line is: " << line <<  endl;
        istringstream iss(line);
        string word;
        while(iss >> word){
            cout << "Each word is: " << word << endl;
            auto it = m1.find(word);
            if(it != m1.end()){
                m1[it->first]++;
            }else{
                m1.insert(std::make_pair(word,1));
            }
        }
    }
    
    cout << "Each word found in the Map" << endl;
    
    cout << "Each word is found these many times" << endl;
    cout << setw(20) << left << "Word" << "Count" << endl;
    cout << setfill('?') << setw(30) << "" << setfill(' ') << endl;
    
    
    for(auto it = m1.begin(); it != m1.end();++it){
        cout << setw(20) << left << it->first << it->second << endl;
    }
    
    
    
    return 0;
}



