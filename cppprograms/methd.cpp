#include <iostream>
using namespace std;

//Methods declartion inside the class.

class Account {

 private:
   int bal;

 public:

  void setBalance(int b){

   bal = b;

  };

  int  getBalance(){

  return bal;

  } ;

 };


int main(){

 Account a;
 a.setBalance(40);
 int bl = a.getBalance();

 cout << "Balance is: " << bl << endl;

 return 0;

}




