// string::substr
#include <iostream>
#include <string>

using namespace std;

int main ()
{
  std::string str="Wethinkingeneralities,butweliveindetails.";
                                           // (quoting Alfred N. Whitehead)

//  std::string str2 = str.substr (3,5);     // "think"

 // std::size_t pos = str.find("live");      // position of "live" in str

//  std::string str3 = str.substr (pos);     // get from "live" to the end

  std::string str4 = str.substr(1,str.length()-1);

  std::cout << "size of str: " << str.size() << endl;
  std::cout << "size of str4: " << str4.size() << endl;
  
  std::cout << str << ' ' << str4 << '\n';

 // std::cout << str2 << ' ' << str3 << '\n';

  return 0;
}

