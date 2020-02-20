#include <iostream>
#include <string>

using namespace std;

void add(int &a, int &b){
  cout << "addition: " << a+b << endl;
  a = 15, b =20;
}

void diff(int a, int b){
  cout << "diff: " << a-b << endl;
}

void mult(int a, int b){
  cout << "mult: " << a*b << endl;
}

int main(){

 int a = 5, b=6;
 
 add(a,b);
 diff(a,b);
 mult(a,b);

 return 0;

}
