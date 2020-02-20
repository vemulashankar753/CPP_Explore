#include <iostream>
#include <string>
using namespace std;

string s = "abcdefghij";

void getthevalues(string &s1, string &s2){

   s1 = s.substr(0,4);
   s2 = s.substr(5,(s.length()-1));
};

int main(){


  string s1, s2;

  getthevalues(s1,s2);

  cout << "S1 value" << s1 << "S2 Value" << s2 << endl;

  return 0;

}



  
  
