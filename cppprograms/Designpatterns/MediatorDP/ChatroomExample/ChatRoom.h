//
// Created by Shankar Vemula on 2/4/21.
//

#ifndef UNTITLED1_CHATROOM_H
#define UNTITLED1_CHATROOM_H
#include "person.h"
#include <vector>


struct ChatRoom {

    vector<Person*> people;
    void broadcast(const string& origin, const string& message);
    void join(Person* p);
    void message(const string& origin, const string& who,
                 const string& message);



};


#endif //UNTITLED1_CHATROOM_H

