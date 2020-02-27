//Selection Sort in C++
//For each iteration min. elemeent is moved to the leftside

#include <iostream>
#include <string>

using namespace std;

int main(){

 int n;

 cout << "Enter the no. of elemeents" << endl;

 cin >> n;

 cout << "Enter the each  elemeent" << endl;

 int a[n];

 for(int i = 0;i <n ;i++){
    cin >> a[i];
 }

 for(int i = 0;i <n ;i++){
    cout << a[i] << endl;
 }

 for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      int temp;
      if(a[i]>a[j]){
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
    }
 }


 for(int i = 0;i <n ;i++){
   cout << a[i] << endl;
 }

}

