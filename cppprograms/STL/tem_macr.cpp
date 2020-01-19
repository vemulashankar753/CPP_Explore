//Generic Programming with Macros

#include <iostream>

#define MAX(a,b) ((a>b) ? a: b) 

using namespace std;

int main(){

 cout << MAX(5,10) << endl;
 cout << MAX(4.0,3.0) << endl;
// cout << MAX(h,k) << endl; //its giving a compilation issue
 cout << MAX('h', 'k') << endl;

 return 0;

}

   

