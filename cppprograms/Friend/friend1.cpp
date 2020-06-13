#include <iostream>
#include <string>

using namespace std;

class Human{
private:
    int age;
    string name;
    friend void displayDetails(const Human& h);
    
public:
    Human(int a, string n):age(a),name(n){};
};

void displayDetails(const Human& h){
    cout << "Age is " << h.age << endl;
    cout << "name is " << h.name << endl;
    
}

int main(){
    
    Human h1 {15, "baby"};
    displayDetails(h1);
    return 0;
}
