//
//  CommandDp.cpp
//  CPPNew
//
//  Created by Shankar Vemula on 1/3/21.
//

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

struct BankAccount{
    int Balance {100};
    int overdraft {-500};
    void deposit(int amount){
        Balance += amount;
        cout << "Amount Deposited is: " << amount << ": New Balance is: " << Balance << endl;
    }
    void withdraw(int amount){
        if(Balance-amount >= overdraft){
            Balance = Balance-amount;
            cout << "New Balance is: " << Balance << ": Amount withdrawn is: " << amount << endl;
        }
    }
    friend ostream&  operator<<(ostream& os, const BankAccount& b);
    
};

ostream&  operator<<(ostream& os, const BankAccount& b){
    os << "Bank account details: Balance " << b.Balance << endl;
    return os;
};

struct Command{
    virtual void call()=0;
};

struct BankAccountCommand : Command{
    BankAccount& Account;
    enum Action {deposit, withdraw} action;
    int amount;
    BankAccountCommand(BankAccount& b, Action action, int a):
    Account(b), action(action),amount(a){
        
    }
    void call() override{
        switch(action){
            case deposit:
                Account.deposit(amount);
                break;
            case withdraw:
                Account.withdraw(amount);
                break;
        }
        
    }
};

int main(){
    
    BankAccount bA;
    vector<BankAccountCommand> commands {
        BankAccountCommand{bA, BankAccountCommand::deposit, 500},
        BankAccountCommand{bA, BankAccountCommand::withdraw, 100}
    };
    
    cout << bA << endl;
    
    for(auto& c: commands){
        c.call();
    }
    
}

