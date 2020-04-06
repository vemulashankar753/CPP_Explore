//Map has a default sort of ascending order, as it implements the std::less<> class by default when inserting the elements
//in the map

#include <iostream>
#include <string>
#include <map>

using namespace std;
template <typename T>
void displaymapelements(T& t){
  for(auto it = t.cbegin(); it != t.cend();++it){
    cout << "key is: " << it->first  << "value is:" << it->second << endl;
  }
} 

int main(){

 // map<int,string> mp1; //or map<int,string,std::less<int>>
  map<int,string,std::less<int>> mp1;

  mp1.insert(make_pair(4,"shankar"));
  mp1.insert(make_pair(2,"krishna"));
  mp1[5] = "deva";
  mp1.insert(std::pair<int,string>(3, "god"));
  mp1[1] = "shak";
  mp1[1] = "shakti";

  displaymapelements(mp1);

  return 0;

}


