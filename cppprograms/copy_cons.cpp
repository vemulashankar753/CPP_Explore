#include <iostream>
#include <string>

using namespace std;

class Player {

 private:
  string name;
  int age;
  int exp;

 public:

  Player(string name = "None", int age = 0, int exp = 0);

  Player(const Player &source);  

//  void  displayPlayer(Player &p);

  ~Player(){
    cout << "destructor is called" << endl;
  }  

  string getName(){
    return name;
  };

  int getage(){
   return age;

  };

  int getexp(){
    return exp;
  }

};

Player::Player(string nam, int a, int e)
   :name(nam), age(a), exp(e) {
  cout << "3 args const. is called " << endl;
};

Player::Player (const Player &source)
//  :name(source.name),age(source.age), exp(source.exp){
  :Player(source.name, source.age, source.exp){

  cout << "Copy constr. is called" << endl;

};

void displayPlayer(Player &source){
   cout << "name is: " <<source.getName() << endl;
   cout << "age is: " << source.getage() << endl;
   cout << "expis: " << source.getexp() << endl;
};

int main(){

  Player p1;

  displayPlayer(p1);

  Player p2 {"Shankar", 30, 10};

  displayPlayer(p2);

  Player p3 {p2};

  return 0;

} 




