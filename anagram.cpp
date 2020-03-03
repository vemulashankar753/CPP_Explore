#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

//int makeanagram(std::string &s1, std::string &s2)


int main(){

  std::string s1 {};
  std::string s2 {};


  getline(cin,s1);

  getline(cin,s2);

  std::sort(s1.begin(),s1.end(), [](int x, int y ){ return x>y; });
  std::sort(s2.begin(),s2.end(), [](int x, int y ){ return x>y; });

  cout << "string s1 : " << s1 << endl;
  cout << "string s2 : " << s2 << endl;

  if (s1.length()> s2.length()){
    int i = s1.length() -  s2.length();
    s1 = s1.substr(s1.length()-i, s1.length());
  }else if (s1.compare(s2) == 0){
    cout << "both are anagrams" << endl;
  }else{
    int i = s2.length() -  s1.length();
    s2 = s2.substr(s2.length()-i, s1.length());
  }

  cout << "string s1 : " << s1 << endl;
  cout << "string s2 : " << s2 << endl;

   if (s1.compare(s2) == 0){
    cout << "both are anagrams" << endl;
   }
  

//e int result = makeanagram(s1,s2);

  return 0;

}
