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
#include <vector>

using namespace std;

//There were some issues in testing the SingleTon Objecs

class Database{
public:
    virtual int get_population(string& s) = 0;
}

class SingletonDb: public Database{
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

class Dummydatabase: public Database{
private:
    map<string,int> capitals;
public:
    //Creating a dummy database
    Dummydatabase(){
        capitals["hyderabad"] = 100;
        capitals["bangalore"] = 200;
        capitals["channai"] = 300;
    }
    int get_population(const string& cityname){
        return capitals[cityname];
    }
};

struct ConfigurableRecordFinder{
    Database& db;
    ConfigurableRecordFinder(Database& db):db(db){
        
    }
    int total_population(vector<string> names){
        int result{0};
        for(auto& name: names){
            //Here instead of depending heavily on the SingleTon db class we can have Dependency Injection
            result += db.get_population(name);
        }
        return result;
    }
    
}

struct SingleTondRecordFinder{
    int totalpopulation(vector<string> names){
        int result{0};
        for(auto& name: names){
            //Here instead of depending heavily on the SingleTon db class we can have Dependency Injection
            result += SingletonDb::getObject().get_population(name);
        }
        return result;
    }
}

//Unit Test cases:

//One Integration Test
TEST(RecordFinderTests,DependenatPopulationTest){
    Dummydatabase db;
    ConfigurableRecordFinder crf(db);
    EXPECT_EQ(crf.total_population(vector<string>{"alpha","gamma"}));

}

    //One Integration Test
  TEST(RecordFinderTests,SingleTonTestPopulation){
    SingleTondRecordFinder rf;
    vector<string>  names {"banglore", "hyderabad", "chennai"};
    int tp = rf.totalpopulation(names);
    EXPECT_EQ(1000+2000, tp);
            
}
                         
int main(){
    string s = "tokyo";
    
   // auto db = SingletonDb::getObject(); //This gives error
    
   // SingletonDb::get_population(s);
    cout << "Population of city Tokyo is :" << SingletonDb::getObject().get_population(s) << endl;
    
}



