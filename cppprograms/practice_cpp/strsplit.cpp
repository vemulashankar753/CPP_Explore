#include <iostream>
#include <string>

using namespace std;

int main(){

std::string s3 = "bo";
std::string s4 = "gcpp";

 string str1 = s3 +","+ s4;

 string s1 = str1.substr(0,str1.find(","));
 string s2 = str1.substr(str1.find(",")+1, str1.length());

 std::cout << "string value is" << s1 << "value of s2" << s2 <<  endl;

 return 0;

}
