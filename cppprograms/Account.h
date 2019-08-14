#ifndef  _ACCOUNT_H_
#define  _ACCOUNT_H_

#include <iostream>
using namespace std;

//Methods  declartion outside the class.

class Account {

 private:
   int bal;

 public:
  Account();
  ~Account();

  void setBalance(int b);
  int  getBalance();

};

#endif
