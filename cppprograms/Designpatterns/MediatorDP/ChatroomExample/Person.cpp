//
// Created by Shankar Vemula on 2/1/21.
//

#include "Person.h"

Person::Person(const string& nam):name(nam){

}

~Person::Person(){

}

void Person::pm(const string& who, const string& mes) const{

}

void Person::say(const string& message){

    room->broadcast(name,message);
}

void Person::receive(const string &origin, const string &message) {

}





bool Person::operator==(const Person &rhs) const {
    return name == rhs.name &&
           chr == rhs.chr;
}

bool Person::operator!=(const Person &rhs) const {
    return !(rhs == *this);
}

