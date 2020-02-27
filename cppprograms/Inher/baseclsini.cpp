// Example of a Public inheritance where subclass have full access to super class member func and vars
#include <iostream>
#include <string>

using namespace std;

class Fish{
 protected:
   bool freshWaterFish;
 public:
   Fish(bool fresh): freshWaterFish(fresh){

   };
   void swim(){
     if (freshWaterFish){
        cout << "Swim in lake" << endl;
     }else{
        cout << "Swim in sea" << endl;
     }

   }
}; 

class Tuna: public Fish{

  public:

    Tuna(): Fish(true){
  //    freshWaterFish = false;
    } 
};

class Carp: public Fish{
  public:

    Carp(): Fish(true){
   //  freshWaterFish = true;
    }
};


int main(){

   Tuna t1;
   t1.swim();

   Carp c1;
   c1.swim();

   return 0;

}

  



