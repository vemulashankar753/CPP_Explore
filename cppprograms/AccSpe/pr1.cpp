#include <iostream>


using namespace std;

class Player {

 private:

   string name {"Shankar"};
   int exp;
   bool health;

 public:

  void getdetails(string s1) {

     cout << "The player details are: " << name << "player: " << s1 << endl;

  };

};

int main(){

   Player p1;
//   p1.name; "std::__cxx11::string Player::name’ is private"//its a private variable, cannot be accessed outside the class

   p1.getdetails("Player1");

   return 0;

} 
