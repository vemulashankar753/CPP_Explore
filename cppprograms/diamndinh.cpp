#include <iostream>

using namespace std;


class A{

 public:
  int i;
  A(){
    cout << "A class def. constrctor is called" << endl;
  }

  virtual print(){};
};

class B: public A{

  public:
  B(){
    cout << "B class def. constrctor is called" << endl;
  }
  

};

class C: public A{

  public:
  C(){
    cout << "C class def. constrctor is called" << endl;
  }

};


class D: public B, C{

  public:
  D(){
    cout << "D class def. constrctor is called" << endl;
  }

};


int main(){
   D d;
   return 0;
}
