#include <iostream>
#include <string>

using namespace std;

int main(){

  std::string name {"shankar"};
  
  cout << name << endl;
 
  std::string n1 {"itsmyname"};

  name.append(n1);
  
  cout << name << endl;

  name.erase(n1);

  cout << name << endl;

  return 0;
}
