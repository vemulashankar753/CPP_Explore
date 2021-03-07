//
// Created by Shankar Vemula on 2/4/21.
//

#include "ChatRoom.h"


void ChatRoom::broadcast(const string &origin, const string &message) {

    for(auto p: people){
        if(p->name != origin ){
            p->receive(origin, message);
        }
    }
}
void ChatRoom::join(Person *p){
        string join_message = p->name + "joins the room";
        p->room = this;
        people.push_back(p);
}

void ChatRoom::message(const string &origin, const string &who, const string &message) {

    auto target = find_if(people.begin(),people.end(),
                          [&](const Person* p){   return p->name == who;

    });
            if(target != people.end()){
                (*target)->receive(origin, message);

}


}

