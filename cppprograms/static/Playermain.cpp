//
//  Playermain.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 9/13/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//

#include "Player.h"

void displaynumplayers(){
    cout << "no.of activie players: " << Player::getplayers() << endl;
}

int main(){
    displaynumplayers();
    Player p("shankar",1,2);
    displaynumplayers();
    {
        Player p2("shankar1",1,2);
        displaynumplayers();
    }
     displaynumplayers();
    
    Player *p3 = new Player("shankar3",4,3);
     displaynumplayers();
     delete p3;
     displaynumplayers();

}

