#include <iostream>
#include <string>

using namespace std;


int main(){

  std::string myname {"shankar"};

  std::string fname = myname.append("vemula");

  cout << myname << endl;
  cout << fname << endl;

  return 0;

}
