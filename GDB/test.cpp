#include <iostream>
using namespace std;

//Compile this file using the command "sudo g++ test.cpp -o test -g -std=c++11", "-g" option is to debug with gdb
//sudo g++ test.cpp -o test -g -std=c++11
void fun1();
void fun2();

int main(){

   cout << "Main is started" << endl;
   int n = 10;
   cout << "n value in Main is:  " << n << endl;
   fun1();
}

void fun1(){
 int n = 20;
  cout << "n value in fun1 is:  " << n << endl;
  fun2();
}

void fun2(){
 int n =30;
  cout << "n value in fun2 is:  " << n << endl;
}
