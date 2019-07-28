#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(){

 uint16_t  r = rand();
 uint16_t  s = rand();
 cout << "value of r is: " << r << "the value of the r per" << (r%10 + 1) << endl;
 cout << "value of s is: " << s << "the value of the s per" << (s%10 + 1) << endl;

 return 0;

}
