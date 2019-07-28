#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
//counting on no.of even numbers in a given vector

bool isEven(int i){

 return (i%2 == 0);

}
int main(){

  vector<int> numbers {1,2,3,4,5,6,7,8,9,10,11,12,13,14};
  //with lamda 
  //auto sumgt2 = count_if(numbers.begin(), numbers.end(), [](int x) { cout << "value of x: " << x << endl; return (x%2 == 0);});
  //without  lamda 

  auto sumgt2 = count_if(numbers.begin(), numbers.end(), isEven);
  cout << "sum of even numbers are: " << sumgt2 << endl;

}

  
