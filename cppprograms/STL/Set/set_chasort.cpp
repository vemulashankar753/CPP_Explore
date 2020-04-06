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

template <typename T>
struct sortdescend {
  bool operator()(const T& lhs, const T& rhs) const{
    return (lhs > rhs);
  }
};

int main(){

  set<int, sortdescend<int> > st;
  st.insert(10);
  st.insert(20);
  st.insert(5);
  st.insert(40);
  st.insert(10);

  displaycontents(st);


  multiset<int, sortdescend<int> > mst  ;
  mst.insert(st.begin(),st.end());
  mst.insert(40);

  displaycontents(mst);

  cout << "the value 40 was duplicated: " << mst.count(40) << endl;

  //finding an eleement
  auto stele = st.find(5);
  if(stele != st.end()){
     cout << "element is found" << *stele << endl;
  }else{
     cout << "element is not found" << *stele << endl;
  }

  //finding an eleement
  auto mstele = mst.find(40);
  if(mstele != mst.end()){
     cout << "element is found" << *mstele << endl;
  }else{
     cout << "element is not found" << *mstele << endl;
  }

  return 0;
}


