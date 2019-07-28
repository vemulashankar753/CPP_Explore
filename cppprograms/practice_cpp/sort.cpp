#include <iostream>

using namespace std;

int main(){

   int n;
   std::cout  << "Enter the no. of integers to sort";
   std::cin >> n;

   int a[n];

   for (int i=0;i<n;i++){
    std::cin >> a[i];
   }

   for (int i=0;i<n;i++){
     std::cout << a[i] << endl;
   }

   for (int i=0;i<n-1;i++){
        int temp;
    for (int j=0;j<n-1-i;j++){        
        if (a[j]>a[j+1]){
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
     }
    } 

   for (int i=0;i<n;i++){
     std::cout << a[i] << endl;
   }
   return 0;

}
