//
//  Observerdp.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 10/11/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;



template <typename T>
class Observer{
public:
    virtual void field_changed(T& source, const std::string& fieldname) = 0;
};


template <typename T>
struct Observable{
    std::vector<Observer<T>*> observers;
    
public:
    void notify(T& source, const std::string& fieldname){
        for (auto obs: observers){
            obs->field_changed(source,fieldname);
        }
    }
    
    void subscribe(Observer<T>& obser){
        observers.push_back(&obser);
    }
    
    void unsubscribe(Observer<T>& obser){
        observers.erase(remove(observers.begin(),observers.end(),obser),observers.end());
    };
};


class Person : public Observable<Person>{ //Observable
private:
    int age;
public:
    Person(int a):age(a){
        
    }
    int getAge() const{
        return age;
    }
    void setAge(int a){
        if(this->age == a){
            return;
        }
        age = a;
        notify(*this,"age");
    }

    bool operator==(const Person& source){
      if(this->age == source.age){
        return true;
      }
    }                       

};
               
               
struct ConsoleObserver: public Observer<Person>
{
private:
    void field_changed(Person& source, const std::string& fieldname) override{
        cout << "Persons: " << fieldname << "Has changed to ";
        if(fieldname == "age"){
            cout << source.getAge() << endl;
        }
    }
};

int main(){
    Person p {10};
    ConsoleObserver cpo;
    p.subscribe(cpo);
    p.setAge(20);
    p.setAge(10);
   // p.setAge(30);
    p.unsubscribe(cpo);
    p.setAge(40);
}

