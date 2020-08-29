//
//  Sngle_Resp_patter_ex.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 8/26/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//

//Single responsibility Principle, it means , a class should have a primary responsibility

#include <string>
#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

struct Journal{
    string title;
    vector<string> entries;
    Journal(const string& title):title(title){
        
    }
    void addentries(const string& entry){
        static int i=1;
        entries.push_back(to_string(i++)+":" + entry);
    }
    //if a persisent code is there, like below it should not be in the class.
  /*  void save(const string& filename){
        ofstream ofs(filename);
        for(auto& e: entries){
            ofs << e << endl;
        }
    } */
};

struct PersisentManager{
    static void save(const Journal& j, const string& filename){
        ofstream ofs(filename);
        for(auto& e: j.entries){
            ofs << e << endl;
        }
    }
};

int main(){
    
    Journal j1("Dear Diary");
    j1.addentries("I ate bug");
    j1.addentries("I cried today");
    getchar();
    PersisentManager pm;
    pm.save(j1,"diary.txt");
    return 0;
    
}

