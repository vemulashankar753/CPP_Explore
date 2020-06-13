
#include <iostream>
#include <string>

using namespace std;

class Human{
private:
    int age;
    string name;
    friend class Utility;
    
public:
    Human(int a, string n):age(a),name(n){};
};

class Utility{
public:
    static void displayDetails(const Human& h){
        cout << "Age is " << h.age << endl;
        cout << "name is " << h.name << endl;
        
    }
};

int main(){
    
    Human h1 {15, "baby"};
   
    Utility::displayDetails(h1);
    return 0;
}
