#include <iostream>
#include <string>

using namespace std;

int fibnocchi(int n){
  if(n<=0){
    return 0;
  }else if(n==1){
    return 1;
  }else{
    return fibnocchi(n-1)+fibnocchi(n-2);
  }
}

int main(){
   cout << fibnocchi(2) << endl;
   cout << fibnocchi(30) << endl;
}

   

  
