//Map has a default sort of ascending order, as it implements the std::less<> class by default when inserting the elements
//in the map
//in this program a binary predicate is defined with class or struct, in this program key is int, so not many changes
//Telephone directory, where insertion and search operation is case insenstive  

#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

template <typename T>
void displaymapelements(T& t){
  cout << "size of map is: " << t.size() << endl;
  for(auto it = t.cbegin(); it != t.cend();++it){
    cout << "key is: " << it->first  << "value is:" << it->second << endl;
  }
}; 

struct PredIgnoreCase{
    bool operator()(const string& s1, const string& s2) const{
       string str1nocase(s1),str2nocase(s2);
       std::transform(s1.begin(),s1.end(),str1nocase.begin(),::tolower);
       std:: transform(s2.begin(),s2.end(),str2nocase.begin(),::tolower);

       return (str1nocase < str2nocase);

   };
};

typedef map<string,string> DIR_WITHCASE;
typedef map<string,string, PredIgnoreCase> DIR_NOCASE;


int main(){

  DIR_WITHCASE d1;
  d1.insert(make_pair("John", "12345"));
  d1.insert(make_pair("JOHN", "12345"));
  d1.insert(make_pair("Sara", "23456"));
  d1.insert(make_pair("Jack", "34567"));
  displaymapelements(d1);

  DIR_NOCASE d2;
  d2.insert(make_pair("John", "12345"));
  d2.insert(make_pair("JOHN", "12345"));
  d2.insert(make_pair("Sara", "23456"));
  d2.insert(make_pair("Jack", "34567"));
  displaymapelements(d2);

  auto it = d1.find("sara");

  if( it != d1.end()){
    cout << "key is found: " << it->first << "  value is: " << it->second << endl;
  }else{
    cout << "key sara is not found: "  << endl;
  }

  auto it1 = d2.find("sara");

  if( it1 != d2.end()){
    cout << "key is found: " << it1->first << "  value is: " << it1->second << endl;
  }else{
    cout << "key sara is not found: "  << endl;
  }

  return 0;

}
