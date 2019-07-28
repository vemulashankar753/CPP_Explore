#include <iostream>
#include <string>
#include <sstream>
using namespace std;
//Code to convert from a string to integer
int main ()
{
  string mystring;
  int input(0);

  cout << "Enter an integer: ";
  getline (cin,mystring);
  stringstream(mystring) >> input;
  cout << input << endl; 
  
/*  cout << "Enter a string: ";
  getline (cin,mystring);
  cout << mystring << endl;

  cout << "Enter a second string: "; 
  getline (cin,mystring); 
  cout << mystring << endl; */
  
  return 0;
}
