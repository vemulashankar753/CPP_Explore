//
//  singletondes_patt.cpp
//  CPP_Learning
//
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <tuple>
#include <map>
#include <memory>
#include <cmath>
#include <cstdio>
#include <map>

using namespace std;

class SingletonDb {
private:
    map<string,int> capitals;
    SingletonDb(){
        cout << "Constructor of singleton db class is called " << endl;
        ifstream ifs("samplefile.txt");
        string line;
        string s2;
        if(!ifs.is_open()){
            cout << "Error in opening the file" << endl;
        }
        while(getline(ifs,line)){
            getline(ifs,s2);
            int pop = stoi(s2);
            capitals[line] = pop;
        }
    }
    
public:
    static SingletonDb& getObject(){
        static SingletonDb sinobj;
        return sinobj;
    }
    ~SingletonDb(){
        cout << "Destructor of singleton db class is called " << endl;
    }
    //No Copy constructor
    SingletonDb(SingletonDb const& ) = delete;
    //No Copy Assignment also
    void operator=(SingletonDb const& ) = delete;
    int get_population(string cityname){
        return capitals[cityname];
    }
    
};

int main(){
    string s = "tokyo";
    
   // auto db = SingletonDb::getObject(); //This gives error
    
   // SingletonDb::get_population(s);
    cout << "Population of city Tokyo is :" << SingletonDb::getObject().get_population(s) << endl;
    
}



