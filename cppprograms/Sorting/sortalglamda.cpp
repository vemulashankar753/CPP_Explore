//Soring a vector contents using lamda
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;


void Displaynumbers(vector<int> &v2){
  for_each(v2.begin(),v2.end(), [](int elem) { cout << elem <<  " :: " ;});//lamda
}

//In above function lamda is used instead of the unary predicate function

int main(){

  std::vector<int> v1;
  v1.push_back(5);
  v1.push_back(1);
  v1.push_back(6);
  v1.push_back(3);
  v1.push_back(2);
  v1.push_back(9);
  
  Displaynumbers(v1); 

  sort(v1.begin(),v1.end(), [](int i, int j) { return (j<i);});

  //[](int i, int j) { return (j<i);is a binary predicate in the form of a lamda function that returns true

  Displaynumbers(v1); 

  return 0;

}

