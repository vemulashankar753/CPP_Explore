
//Without using the Virtual key word, when the makeFishSwim  is called, tuna object will remain as fish object
//here when the tuna object is passed as a reference to makeFishSwim, instread of it converts to Tuna, it remains as Fish.
//If we use Virtual, keyword it will be solved.

//Even if we use smart pointer, in this case still we will have static binding

#include <iostream>
#include <string>
#include <memory>

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

 Fish f;
 f.swim();

 Tuna t;
 t.swim();

 makeFishSwim(t);

 Fish *f1 = new Tuna();

 f1->swim(); //As there is no Virtual key word, there is no Dynamic ploymorphism is achieved,
           // It still calls the Base class swim.
 delete f1;

 std::unique_ptr<Fish> ptr1 = std::make_unique<Tuna>();

 ptr1->swim();

 //Need not to do delete, as it is smart pointer, it will be deleted automatically after it goes out of scope.

}

  


