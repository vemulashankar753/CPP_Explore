#include <iostream>

using namespace std;

int main(){

  const char *ch = "shankar";
  //below line gives an error , as its not modifiable
  *ch = 'k';
  char ah[] = ch; 

  cout << *ch << endl;
}
