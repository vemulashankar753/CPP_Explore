#include <iostream>
#include <string>
#include <cstdlib>
#include <math.h>

using namespace std;

int main(){

  const char st1[10] = "0001ac4f";

//  string st1 = 109647;

 // unsigned long hex_value
        = std::strtoul(st1.c_str(), 0, 16); 
  unsigned long hex_value
        = std::strtoul(st1, 0, 16); 

  double d = 10*log10(double(hex_value/10000.0));

  cout << "hex value is: " << hex_value << "  " << d <<  endl;

  return 0;
}



