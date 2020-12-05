// lower_bound/upper_bound example
#include <iostream>     // std::cout
#include <algorithm>    // std::lower_bound, std::upper_bound, std::sort
#include <vector>       // std::vector

int main () {
  int myints[] = {10,20,30,30,20,10,10,20};
  std::vector<int> v(myints,myints+8);           // 10 20 30 30 20 10 10 20

  std::sort (v.begin(), v.end());                // 10 10 10 20 20 20 30 30

  std::vector<int>::iterator low,up, low1,up1;
  low=std::lower_bound (v.begin(), v.end(), 20); //          ^
  up= std::upper_bound (v.begin(), v.end(), 20); //                   ^

  std::cout << "lower_bound at position " << (low- v.begin()) << '\n';
  std::cout << "upper_bound at position " << (up - v.begin()) << '\n';

//  low1=std::lower_bound (v.begin(), v.end(), 40); 
//  up1= std::upper_bound (v.begin(), v.end(), 40); 

  low1=std::lower_bound (v.begin(), v.end(), 5);
  up1= std::upper_bound (v.begin(), v.end(), 5);

  std::cout << "lower_bound at position " << (low1- v.begin()) << '\n';
  std::cout << "upper_bound at position " << (up1 - v.begin()) << '\n';

  return 0;
}
