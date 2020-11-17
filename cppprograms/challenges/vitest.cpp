#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

  vector<bool> v(26);
  cout << "Vector size is: " << v.size() << endl;
  for(auto e: v){
    cout <<  e << endl;
  }

  return 0;

}
