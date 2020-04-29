#include <iostream>
#include <string>

using namespace std;

int main(){

  std::string s1 = "0000" ;
  std::string s3 {'0'};
  cout << s3 << endl;
  for(size_t i=0;i< s1.length();++i){
     char ch = s1[i];
     string s2 {ch};
//     string s2 = to_string(s1[i]); 
//     cout << s2  << endl;

   //  std::string s2 = s1[i];
     cout << stoi(s2)  << endl;
  } 

  return 0;

}



