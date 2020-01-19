//This program is showing a demo of using the algorthims in the STL

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

  std::vector<int>  v1   {3,5,1,2};

  for (auto elem:v1){
   cout << elem << endl;
  }

  //Algorithm functions
  std::sort(v1.begin(), v1.end());

  //printing after sort 
  for (auto elem: v1){
   cout << elem << endl;
  }

  //algorthim fucntions
  std::reverse(v1.begin(),v1.end());

  //printing after sort 
  for (auto elem: v1){
   cout << elem << endl;
  }

  int sum {};

  //caculate sum using the alogrithim fucntion
  // below 3rd arg is very important, suppose if we calculate the sum of doubles, then give it as 0.0

   sum = std::accumulate(v1.begin(),v1.end(), 0);

  cout << "sum is: " << sum << endl;

}


