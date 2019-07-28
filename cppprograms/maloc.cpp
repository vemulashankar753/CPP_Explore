#include <iostream>
#include <new>
using namespace std;

int main(){

 int i,n;
 int *p;

 cout << "how many memory allcoations are needed" << endl; 
 
 cin >> n ;

 p = new (nothrow) int[n];


 if (p == NULL){

  cout << "memory allocation failed for the p" << endl; 
 }

 for (int i =0;i < n ; i++){
   cout << "enter a no." << endl;
   cin >> p[i];
 } 

  cout << "You have entered: ";
  for (i=0; i<n; i++){
      cout << p[i] << ", ";
 //   delete[] p;
  }

 delete[] p;
 return 0;

}
 
  
 
  
