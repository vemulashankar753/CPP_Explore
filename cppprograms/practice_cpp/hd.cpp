#include <iostream>
#include <string>

using namespace std;

int main(){
  
  std::string str = "9fc";

  int x = std::stoi (str, nullptr, 16);

  std::cout << "value of x: " << x << endl;

  return 0;

}
