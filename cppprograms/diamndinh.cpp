#include <iostream>

using namespace std;


class A{

 public:
  A(){
    cout << "A class def. constrctor is called" << endl;
  }
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
    cout << "B class def. constrctor is called" << endl;
  }

};


class D: public C, B{

  public:
  D(){
    cout << "D class def. constrctor is called" << endl;
  }

};


int main(){
   D d;
   return 0;
}
