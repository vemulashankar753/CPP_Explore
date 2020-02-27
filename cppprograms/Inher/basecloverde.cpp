// Example of a Public inheritance where subclass have full access to super class member func and vars
//overriding base class methods, with derived class instance, you can only call derived class method.
//to call 
#include <iostream>
#include <string>

using namespace std;

class Fish{
 private:
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

    void swim(){

    cout << "tuna swim" << endl;
    }
};

class Carp: public Fish{
  public:

    Carp(): Fish(true){
   //  freshWaterFish = true;
    }

    void swim(){

     cout << "Carp swims" << endl;
    }
};


int main(){

   Tuna t1;
   t1.swim();

   Carp c1;
   c1.swim();

   //To call base class swim method.

    c1.Fish::swim();

   return 0;

}

  



