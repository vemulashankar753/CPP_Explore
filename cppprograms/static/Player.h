//
//  Player.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 9/13/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//
#include <iostream>
#include <string>

using namespace std;

class Player{

private:
   //static int numplayers {0}; //This is not allowed.
  static int numplayers;
  std::string name;
  int health;
  int xp;
public:
  string getname(){
    return name;
}
int getxp(){
   return xp;
}

Player(std::string s, int h, int x):name(s),health(h),xp(x){
    numplayers++;
}

Player(const Player& p):
   name(p.name),health(p.health),xp(p.xp){
}

~Player(){
    cout << "Destructor is called "<< endl;
    numplayers--;
}
static int getplayers(){
    return numplayers;
}
};

