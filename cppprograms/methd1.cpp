#include <iostream>
using namespace std;

//Methods  declartion outside the class.

class Account {

 private:
   int bal;

 public:

  void setBalance(int b);
  int  getBalance();

};

void Account::setBalance(int b){
  bal = b;

};

int Account::getBalance(){
  return bal;

}


int main(){

 Account a;
 a.setBalance(40);
 int bl = a.getBalance();

 cout << "Balance is: " << bl << endl;

 return 0;

}




