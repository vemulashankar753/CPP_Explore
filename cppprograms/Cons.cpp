#include <iostream>

using namespace std;

class Rect{

   private:
    int a, b;
   public:
     Rect(int, int);
     int area();

};

Rect::Rect(int a, int b){

    this->a = a;
    this->b = b;

}

int Rect::area(){

   return a*b;
}

int main(){

  Rect rec(10,20);

  Rect *r2, *r3, *r4;

 
  r2 = &rec;

  cout << "area through r2 instance" << r2->area() << endl;

  r3 = new Rect(20,40);
 
  cout << "area through r3 instance" << r3->area() << endl;

  return 0;

}
