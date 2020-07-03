//
//  list_example.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 7/3/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//

#include <iostream>
#include <list>
#include <forward_list>
#include <iterator>
#include <algorithm>

using namespace std;

class Person{
private:
    friend std::ostream &operator<<(std::ostream &os, const Person &p);
    string name;
    int id;
public:
    Person():name("default"),id(0){
        cout << "Default constructor is called:" << endl;
        cout << "name is:   " <<name << "id is: " << id << endl;
    }
    Person(string n,int i):name(n),id(i){
        cout << "Parameterizied constructor is called:" << endl;
        cout << "name is: " <<name << "id is: " << id << endl;
        
    }
    bool operator<( const Person& rhs) const{
        return this->id < rhs.id;
        
    }
    
    bool operator==(const Person& rhs) const{
        return (this->name == rhs.name && this->id == rhs.id);
    }
    
    ~Person(){
        cout << "Destructor is called: " << endl;
        cout << "name is: " <<name << "id is: " << id << endl;
        
    }
};

std::ostream& operator<<(std::ostream &os, const Person& p){
    os<< p.name << ":" << p.id;
    return os;
};


template <typename T>
void display(std::list<T> ld){
    cout << "Displaying the list elements" << endl;
    for(const auto& e: ld){
        cout << e << endl;
        
    }
};

void test1(){
    cout << "test1 ouput is :" << endl;
    std::list<int> l1 {1,2,3,4,5,6};
    display(l1);
    
    std::list<string> l2;
    l2.push_back("back");
    l2.push_front("front");
    display(l2);
    
    std::list<int> l3;
    l3 = {1,2,3,4,5,6,7,8,9,10};
    display(l3);
    
    std::list<int> l4 (10,100); // 10 values each of 100
    display(l4);

}

void test2(){
    
    cout << "test2 ouput is :" << endl;
    std::list<int> l1 {1,2,3,4,5,6,7,8,9,10};
    display(l1);
    
    cout << l1.front() << endl;
    cout << l1.back() << endl;
    cout << "l1 size: " << l1.size() << endl; //10
    
    l1.clear();
    display(l1);
    
    cout << "l1 size: " << l1.size() << endl; //0
    
    
};

void test3(){
    
    cout << "test3 ouput is :" << endl;
    std::list<int> l1 {1,2,3,4,5,6,7,8,9,10};
    display(l1);
    
    l1.resize(5);// remaining 5 elements will be removed.
    display(l1);

    cout << "l1 size: " << l1.size() << endl; //10
    
    l1.resize(10);
    display(l1); // l1 next elements will be default intialized to 1
    

    cout << "l1 size: " << l1.size() << endl; //0
    
    std::list<Person> lp;
    lp.resize(5); //Default constructor is called.
    display(lp);
    
    
};

void test4(){
    cout << "test4 ouput is :" << endl;
    std::list<int> l1 {1,2,3,4,5,6,7,8,9,10};
    display(l1);
    
    auto it = std::find(l1.begin(),l1.end(),5);
    
    if(it != l1.end()){
        l1.insert(it,100);
    }
    display(l1);
    
    std::list<int> l2 {1000,2000,3000};
    l1.insert(it,l2.begin(),l2.end());
    display(l1);
    
    cout << "iteator position is :" <<  *it <<endl;
    
    std::advance(it,-4);
    cout << "iteator position is :" <<  *it <<endl; // now it points to 2
    
    l1.erase(it);
    display(l1);
    
    
};

void test5(){
    cout << "test5 ouput is :" << endl;
      
    std::list<Person> ps {
        {"Shan", 1},
        {"Madh", 2},
        {"Krish",3}
    };
    
    display(ps);
    
    string name;int id;
    cout << "Enter the name: " << endl;
    std::getline(cin,name);
    cout << "Enter the id: " << endl;
    cin >> id;
    
    ps.emplace_back(name,id);
    
    display(ps);
    
    //Insert a new Person before Madh/Shan
    
    auto it = std::find(ps.begin(),ps.end(), Person{"Madh",2});
    
    if(it != ps.end()){
        ps.emplace(it, "Frank", 20);
    }
    
    display(ps);

};

void test6(){
    
    cout << "test6 ouput is :" << endl;
         
    std::list<Person> ps {
           {"Shan", 3},
           {"Madh", 1},
           {"Krish",2}
    };
       
    display(ps);
    ps.sort();
    display(ps);
    
}

int main(){
    
   // test1();
   // test2();
   // test3();
   // test4();
    
    //test5();
    test6();
    
    

}


