#include <iostream>
#include <string>

using namespace std;

class Player{

  private:
    std::string name;
    int age;
    int xp;

 public:

 void setname(string n){
   name = n;
 }

 //Overloaded Constructors.
  Player(){
    cout << "default constuctor is called" << endl;
  }
 //No Arg constructor
  Player(std::string na, int a);
  Player(std::string na, int a, int x){
    cout << "3 parameters constructor is called" << endl;
  };
  Player(double age){
    cout << "single parameters constructor is called" << endl;
  };
  Player(double age, std::string name);

  ~Player(){ //Destructor.
    cout << "destructor is called:" << name <<  endl;
   };

};

int main(){

  {
    Player p1;
    p1.setname("Shankar");
  }
   
  {
   Player p2;
   p2.setname("shan1");
   Player p3("shan2", 3, 3);
   p3.setname("shan2");
   Player p4(2.0);
  }//Destructor will be called in reverse order.

  Player *p5 = new Player;
  p5->setname("shan5");

  Player *p6 = new Player("shan6", 23, 29);

  p6->setname("shan6");


  delete p5;
  delete p6;

}


 
    


