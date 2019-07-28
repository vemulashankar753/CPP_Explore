#include <iostream>
#include "Vir.h"
using namespace std;


Vir::Vir(){
  std::cout << "Vir::Default constructor is called" << endl;
}

Vir::Vir(int a, int b){

  this->a = a;
  this->b = b;
}

int Vir::area(){

  int c;
  c = a*b;
  return c;

}


