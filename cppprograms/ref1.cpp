#include <iostream>

using namespace std;

int main(){

   int a,c;
   int &b = a; //Shoudl not pass uninitialized variable as a reference to other varialbe
   &b = c;
   cout << "value of b:" << b << endl;
   return 0;

}
