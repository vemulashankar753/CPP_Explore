#include <iostream>
#include <string>
#include <set>

using namespace std;

template <typename T>
void displaycontents(const T& input){

  for(auto itr = input.begin(); itr!=input.end(); ++itr){
      cout << "element of set are: " << *itr << endl;
  }
}

int main(){

  set<int> st;
  st.insert(10);
  st.insert(20);
  st.insert(5);
  st.insert(40);
  st.insert(10);

  displaycontents(st);

  multiset<int> mst  ;
  mst.insert(st.begin(),st.end());
  mst.insert(40);

  displaycontents(mst);

  return 0;
}


