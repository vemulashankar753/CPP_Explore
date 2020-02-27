// Example of a Public inheritance where subclass have full access to super class member func and vars
#include <iostream>
#include <string>

using namespace std;

class Fish{

 public:
   bool freshWaterFish;
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

    Tuna(){
      freshWaterFish = false;
    } 
};

class Carp: public Fish{
  public:

    Carp(){
     freshWaterFish = true;
    }
};


int main(){

   Tuna t1;
   t1.freshWaterFish = true;
   t1.swim();

   Carp c1;
   c1.swim();

   return 0;

}

  



