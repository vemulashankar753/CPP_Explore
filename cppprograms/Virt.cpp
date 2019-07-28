#include <iostream>
#include "Vir.cpp"

using namespace std;

class Virt : public Vir{

 private: 
  int a,b;

 public:
   Virt(){
    std::cout << "Default Cons. is called" << endl;
   }

   Virt(int a, int b){
    this->a = a;
    this->b = b;
   }

   int area(){
     int c;
     c=a+b;
     return c;
   }
     
};

