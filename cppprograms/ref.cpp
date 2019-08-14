#include <iostream>

using namespace std;


void invalues(int &a, int& b){
   a = 10;
   b = 20;
//   return 0;
}

void invalues1(int &a, int& b){
   a =310;
   b =320;
//   return 0;
}
int main() {

   int a, b;
   invalues(a,b);
   cout << "values of a:" << a << " values of b:" << b << endl;
   invalues1(a,b);
   cout << "values of a:" << a << " values of b:" << b << endl;

}

