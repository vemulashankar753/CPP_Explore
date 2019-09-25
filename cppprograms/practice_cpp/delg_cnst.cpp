//Delegation of Constructors
#include <iostream>
#include <string>

using namespace std;

class Player{

 private:
   string name;
   int age;
   int exp;

 public:
   Player();
   Player(string s);
   Player(string s, int n, int e); 
};

//Without the delegting constructors
/*
Player::Player():name("Shankar"), age(33), exp(10){
 cout << "default constructor is called ;" << endl;
};

Player::Player(string n): name(n),age(35), exp(12){
  cout << "one arg constr. is called" << endl;
};

Player::Player(string n, int a, int e):name(n),age(a),exp(e){
  cout << "three arg constr. is called" << endl;
}; */


//With delegating constructor

Player::Player()
    :Player("None",0,0) {
 cout << "default constructor is called ;" << endl;
};

Player::Player(string n) 
   :Player(n, 0,0) {
  cout << "one arg constr. is called" << endl;
};

Player::Player(string n, int a, int e):name(n),age(a),exp(e){
  cout << "three arg constr. is called" << endl;
}; 



int main(){

  Player p1;
  Player p2("madhavi");
  Player p3("unknown", 34, 37);

  return 0;

}


