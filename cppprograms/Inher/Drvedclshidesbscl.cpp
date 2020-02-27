
//Derived class hiding the base class methods
#include <iostream>
using namespace std;


class Fish{

publc:
 void swim(){
  cout << "Fish Swims" << endl;
 }

 void swim(bool watertype){
  if (watertype){
    cout << "Swims in lake" << endl;
  }else{
    cout << "Swims in Sea" << endl;
  }
 }
};

class Tuna: public Fish{
  public:

   //Solution
  //using Fish::swim;
   void swim(){
     cout << "Tuna swims real fast" << endl;
   }

};

int main(){

  Tuna t;
 // t.swim(false); Compilation failure, Fish::Swim(bool) is hiddern Tuna::swim();
  t.swim();

  return 0;
}

//Output , Tuna swims real fast

//Solution 


  

