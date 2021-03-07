//
//  ArraybasedCompdp.cpp
//  DesignPattern
//
//  Created by Shankar Vemula on 3/4/21.
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

class Student{

private:
    string name;
    int rollNo;

public:
    
    static Student* createNewStudent(string n, int r){
        return new Student(n,r);
    }
    Student(string n, int r):name(n),rollNo(r){
        cout << "Parameterized  Constructor is called: "<< endl;
    }
    ~Student(){
        cout << "Destructor is called: " << "and corresponding rollNo is: " << rollNo <<  endl;
    }
    void setName(string n){
        name = n;
    }
    
    void setRollNo(int r){
        rollNo = r;
    }
    string getName() const{
        return name;
    }
    int getRollNo() const{
        return rollNo;
    }
};

int main(){
    
    Student* s;
    vector<Student*> vs;
    
    for(int i =0;i<5;++i){
        s = Student::createNewStudent("shankar", i);
        vs.push_back(s);
    }
    
    for(int i =0;i<5;++i){
        s = vs.at(i);
        cout << s->getName() << endl;
        cout << s->getRollNo() << endl;
        //Without the Below line the destructor will never be called, it will cause a memory leak in the Progam
        delete s;
    }
     
   return 0;
                     
   
}

