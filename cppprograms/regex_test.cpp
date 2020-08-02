#include <iostream>
#include <string>
#include <regex>
#include <iomanip>

using namespace std;

std::regex mydes  {"(GOA)?QDRR\\-\\d+\\-\\d+\\/GOT\\d"};
std::regex rfamexpr {"(GOA)?RFAMP\\d"};

int main(){

   string s1 = "GOANRFAMP1";
   string s2 = "RFAMP1";
   string s3 = "GOARFAMP1";
  // std::cout << std::boolalpha << endl;
   cout << std::regex_match(s1,rfamexpr) << endl;
   cout << std::regex_match(s2,rfamexpr) << endl;
   cout << std::regex_match(s3,rfamexpr) << endl;

   return 0;

}

   
