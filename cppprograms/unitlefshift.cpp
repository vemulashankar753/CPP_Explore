#include <iostream>
#include <string>

using namespace std;

int main(){

  int x = 5;

  uint16_t y = (x<<8 | 1000);

  cout << y << endl;

  return 0;
}
