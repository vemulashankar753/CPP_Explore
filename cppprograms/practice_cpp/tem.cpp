#include <iostream>

using namespace std;

template<>
void pr(int a){

   cout << "a value" << a << endl;
}

template <class T>
void tpr(T b){

   cout << "b value: " << b << endl;
}


int main(){

//   int c = 10;
   pr<int>(1);
   tpr<float>(20);
}
