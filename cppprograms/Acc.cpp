#include <iostream>
#include "Account.h"

using namespace std;

int main(){

   Account a;
   a.setBalance(50);
   int b = a.getBalance();

   cout << "Balance is: " << b << endl;

   return 0;

}

