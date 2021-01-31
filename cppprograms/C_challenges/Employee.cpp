//
//  Employee.cpp
//  CPPNew
//
//  Created by Shankar Vemula on 12/29/20.
//

#include <iostream>

struct Address{
    char cit[20];
    char state[10];
};

struct Emp{
    char name[20];
    Address *phy;
    Address *ma;
};

using namespace std;

int main(){
    
    Emp *emps = new Emp[4];
    
    Address *p1 = NULL;
    Address *m1 = NULL;
    
    for(int i=0;i<4;i++){
        
        char ch[20] = "shankar";
        strncpy(emps[i].name,ch,sizeof(ch));
        p1 = new Address();
        m1 = new Address();
//        emps[i].phy = p1;
//        emps[i].ma = m1;
        strncpy(emps[i].name,ch,sizeof(ch));
        char add[20] = "newJersy";
        strncpy(p1->cit, add, sizeof(add));
        strncpy(p1->state, add, sizeof(add));
        strncpy(m1->cit, add, sizeof(add));
        strncpy(m1->state, add, sizeof(add));
        emps[i].phy = p1;
        emps[i].ma = m1;
    }
    
    for(int i=0;i<4;i++){
        
        cout << "Each employee details are" << endl;
        cout << "Employee name is: " << emps[i].name << endl;
        Address *a1 = emps[i].phy;
        Address *p1 = emps[i].ma;
        
        cout << "Address of phy is :" << a1->cit << "  state:" << a1->state << endl;
        cout << "Address of mailing is :" << p1->cit << "  state:" << p1->state << endl;
    }
    
    return 0;
    
    
}

