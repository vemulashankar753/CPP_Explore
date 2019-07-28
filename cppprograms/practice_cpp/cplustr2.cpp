#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){

  string unform {"StephenHawking"};
  int i = 0;
  string str1, str2;
  //finding index 
  while(i < unform.length()){
    i++;
    if(isupper(unform.at(i)))
      break;
  } 

  str1 = unform.substr(0, i);
  str2 = unform.substr(i,unform.length());

  string s3 = str1 + " " + str2;

  cout << "capital found at:" << i << endl;
  cout << "s3 is " << s3 << endl;

  return 0;

}
 
  

