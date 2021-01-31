// string::substr
#include <iostream>
#include <string>

using namespace std;

int main ()
{
  std::string str="We think in generalities, but we live in details.";
                                           // (quoting Alfred N. Whitehead)

  cout << "string length is: " <<  str.length() << endl;
  std::string str2 = str.substr (4,5);     // "think"

  std::size_t pos = str.find("live");      // position of "live" in str

  std::string str3 = str.substr (pos);     // get from "live" to the end

  std::cout << str2 << ' ' << str3 << '\n';

  str.erase(0);

  cout << "after erasing think : " << str2 << endl;

  return 0;
}
