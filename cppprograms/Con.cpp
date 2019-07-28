#include <iostream>

using namespace std;

class Rect {

  private:
   int a,b;

  public:
   Rect();
   Rect(int , int);  
   void setvalues(int , int );
   int  area();

};

Rect::Rect(){

  cout << "default constructor is called" << endl;

};

Rect::Rect(int a, int b){

  cout << "parameterized constructor is called" << endl;

   this->a = a;
   this->b = b;

};

void Rect::setvalues(int a, int b){

     this->a = a;
     this->b = b;

};

int  Rect::area(){

   return a*b;
};

int main(){

    Rect rec1;
    rec1.setvalues(10,20);

    cout << "1st instacne area is" << rec1.area() << endl; 

    Rect rec2(4,10);

    cout << "2nd instacne area is" << rec2.area() << endl; 
    return 0;

}; 
