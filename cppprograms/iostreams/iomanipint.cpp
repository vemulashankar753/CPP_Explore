#include <iostream>

int main(){

 int n {255};

 std::cout << "Default behaviors ==================" << std::endl;

 std::cout << std::dec << "n value:" <<  n << std::endl;
 std::cout << std::hex << "n value:" << n << std::endl;
 std::cout << std::oct << "n value:" << n << std::endl;

 std::cout << "behaviors with showbase==================" << std::endl;

 std::cout << std::showbase;

 std::cout << std::dec << "n value:" <<  n << std::endl;
 std::cout << std::hex << "n value:" << n << std::endl;
 std::cout << std::oct << "n value:" << n << std::endl;

 std::cout << std::uppercase;

 std::cout << std::dec << "n value:" <<  n << std::endl;
 std::cout << std::hex << "n value:" << n << std::endl;
 std::cout << std::oct << "n value:" << n << std::endl;

 std::cout << std::showpos;
 std::cout << std::dec << "n value:" <<  n << std::endl;

 //using the sefmethods

  //std:;cout.setf(std::ios::uppercase);
  //std:;cout.setf(std::ios::showbase);
  //std:;cout.setf(std::ios::showpos);


  //Resetting the above

 /* std::cout << std::resetiosflags(std::ios::basefield);
  std::cout << std::resetiosflags(std::ios::uppercase);
  std::cout << std::resetiosflags(std::ios::showpos);*/

 return 0;



}

 
