#include <iostream>

using namespace std;

int main()
{
  char *p = "Hello";
  char* &q = p;
  cout <<p <<' '<<q <<"\n";
  q = "World"; //Why is there no error on this line
  cout <<p <<' '<<q <<"\n";
}
