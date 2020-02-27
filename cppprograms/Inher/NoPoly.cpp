
//Without using the Virtual key word, when the makeFishSwim  is called, tuna object will remain as fish object
//here when the tuna object is passed as a reference to makeFishSwim, instread of it converts to Tuna, it remains as Fish.
//If we use Virtual, keyword it will be solved.
#include <iostream>
#include <string>

using namespace std;


class Fish {

public:
 void swim(){

   cout << "fish swims" << endl;
 };
};


class Tuna: public Fish {

 public:
  void swim(){

   cout << "Tuna swims" << endl;
  }
};

void makeFishSwim(Fish& inputfish){
   inputfish.swim();
}

int main(){

 Tuna t;
 t.swim();

 makeFishSwim(t);

}

  


