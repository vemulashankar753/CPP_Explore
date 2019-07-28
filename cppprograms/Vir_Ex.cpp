#include <iostream>
#include "Virt.cpp"

using namespace std; 

int main(){

  int c;

  Vir Vir(10,20);
  std::cout << "Vir:: Area is" << Vir.area() << endl;

  Virt Virt(10,20);
  c =  Virt.area();

  std::cout << "Virt::Area is: " << c << endl;

}

   

