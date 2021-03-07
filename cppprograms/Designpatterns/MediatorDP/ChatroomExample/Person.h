//
// Created by Shankar Vemula on 2/1/21.
//

#ifndef UNTITLED1_PERSON_H
#define UNTITLED1_PERSON_H
#include <string>
#include <algorithm>
using namespace std;

class  ChatRoom;

struct Person {

    string name;
    ChatRoom* chr {nullptr};

    Person(const string &name);
    void say(const string& message);
    void pm(const string& who, const string& message) const;
    void receive(const string& origin, const string& message);

    bool operator==(const Person &rhs) const;

    bool operator!=(const Person &rhs) const;

};


#endif //UNTITLED1_PERSON_H

