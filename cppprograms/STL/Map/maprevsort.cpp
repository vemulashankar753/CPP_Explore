//Map has a default sort of ascending order, as it implements the std::less<> class by default when inserting the elements
//in the map
//in this program a binary predicate is defined with class or struct, in this program key is int, so not many changes

#include <iostream>
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

template <typename T>
struct ReverseSort{

   bool operator()(const T& key1, const T& key2) const{
     return (key1 > key2);
   }
};


int main(){

 // map<int,string> mp1; //or map<int,string,std::less<int>>
  map<int,string,ReverseSort<int>> mp1;

  mp1.insert(make_pair(4,"shankar"));
  mp1.insert(make_pair(2,"krishna"));
  mp1[5] = "deva";
  mp1.insert(std::pair<int,string>(3, "god"));
  mp1[1] = "shak";
  mp1[1] = "shakti";

  displaymapelements(mp1);

  //multimap allows duplicate keys also
  multimap<int,string> mmp(mp1.begin(), mp1.end());
//  mmp[5] = "robot";
//  mmp[1] = "shanthi";

  mmp.insert(make_pair(5,"devas"));
  mmp.insert(make_pair(1,"shanthi"));

  cout << "multimap" << endl;
  displaymapelements(mmp);

  //finding duplicate keys
  auto it = mmp.find(1);

  if(it != mmp.end()){
   //Couting no. of duplicate keys
   size_t  n = mmp.count(it->first);
   while(n){
     cout << "the key: " << it->first << "value: " << it->second << "these many times found: " << n << endl;
     --n;
     ++it;
   }
 }

 //Erasing the elements in the map
 auto it1 = mmp.find(3);

 if(it1 != mmp.end()){
  cout << "removnig key: " << it1->first << endl;
  mmp.erase(it1->first);//mmp.erase(it1);
 } 

  cout << "multimap after erasing" << endl;
  displaymapelements(mmp);
   
  //Remove the elements in the range
  mmp.erase(mmp.lower_bound(1), mmp.upper_bound(3));

  cout << "multimap after erasing range" << endl;
  displaymapelements(mmp);


  return 0;

}

/********
key is: 5value is:deva
key is: 4value is:shankar
key is: 3value is:god
key is: 2value is:krishna
key is: 1value is:shakti
*********/
