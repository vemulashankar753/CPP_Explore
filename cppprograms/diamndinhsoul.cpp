#include <iostream>

using namespace std;
//Class D has the 2 copies of the 2 class A's, this will cause ambuiguites , 

/* outPut is 
A def ructor is called
C class def. constrctor is called c10
B class def. constrctor is called b10
D class def. constrctor is called
D destructor is called
B destructor is called
C destructor is called
A destructor is called
*/

class A{

 public:
  //int base;
  A(int a){
    cout << "A ef. constrctor is called: a"  << a <<  endl;
  }
  A(){
    cout << "A def ructor is called" << endl;
  }

  ~A(){
    cout << "A destructor is called" << endl;
  }
};

class B: virtual public A{

  public:
  B(int b):A(b){
    cout << "B class def. constrctor is called b" << b <<  endl;
  }
  ~B(){
    cout << "B destructor is called" << endl;
  }

};

class C: virtual  public A{

  public:
  C(int c):A(c){
    cout << "C class def. constrctor is called c" << c << endl;
  }
  ~C(){
    cout << "C destructor is called" << endl;
  }

};


class D: public C, public B{

  public:
  D(int d): C(d),B(d){
    cout << "D class def. constrctor is called" << endl;
  }
  ~D(){
    cout << "D destructor is called" << endl;
  }

};


int main(){
   D d(10);
   return 0;
}
