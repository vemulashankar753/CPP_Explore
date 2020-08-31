//
//  DestrwithoutVirtual.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 8/30/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//

#include <string>
#include <iostream>


using namespace std;

class Account {
private:
    int amount;
public:
    Account(int a):amount(a){
        cout << "Acc. Constructor is called with amount: " << amount <<  endl;
    }
    virtual  void withdrawamount(){
         cout << "Acc. amount: is withdrawn: " << amount <<  endl;
    }
    ~Account(){
        cout << "Acc. desstructor is called with amount: " <<  endl;
    }
};

class Checking: public Account {
    
public:
    Checking(int a):Account(a){
        cout << "Checking Constructor is called with amount: " <<  endl;
    }
    
    void withdrawamount(){
         cout << "Checking Acc. amount: is withdrawn: " <<  endl;
    }
    
    ~Checking(){
           cout << "Checking Constructor is called with amount: " <<  endl;
     }
    
};

class Saving: public Account {
    
public:
    
    Saving(int a):Account(a){
        cout << "Saving Constructor is called with amount: " <<  endl;
    }
    
    void withdrawamount(){
         cout << "Saving Acc. amount: is withdrawn: " <<  endl;
    }
    
    ~Saving(){
           cout << "Saving Constructor is called with amount: " <<  endl;
     }
    
};

int main(){
    Account *A1  = new Account(1000);
    Account *A2  = new Checking(2000);
    Account *A3  = new Saving(3000);
    
    A1->withdrawamount();
    A2->withdrawamount();
    A3->withdrawamount();
    
    delete A1;
    delete A2;
    delete A3;
    
    return 0;
    
    
}

//Here We can see that Derived class are not destroyed
/*output
Acc. Constructor is called with amount: 1000
Acc. Constructor is called with amount: 2000
Checking Constructor is called with amount:
Acc. Constructor is called with amount: 3000
Checking Constructor is called with amount:
Acc. amount: is withdrawn: 1000
Checking Acc. amount: is withdrawn:
Saving Acc. amount: is withdrawn:
Acc. desstructor is called with amount:
Acc. desstructor is called with amount:
Acc. desstructor is called with amount:
**/

