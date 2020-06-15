#include <iostream>
#include <string>
#include <memory>
#include <vector>

using namespace std;

class B;

class A{
    std::shared_ptr<B> s;
public:
    void set_A(std::shared_ptr<B> &b){
        s = b;
    }
    A(){
        cout << "Constructor of A is called" << endl;
    }
    ~A(){
        cout << "Destructor of A is called" << endl;
    }
    
};

class B{
    std::weak_ptr<A> s;
public:
    void set_B(std::shared_ptr<A> &a){
        s = a;
    }
    B(){
        cout << "Constructor of B is called" << endl;
    }
    ~B(){
        cout << "Destructor of B is called" << endl;
    }
    
};

int main(){
    std::shared_ptr<A> a1 = std::make_shared<A>();
    std::shared_ptr<B> b1 = std::make_shared<B>();
    a1->set_A(b1);
    b1->set_B(a1);
    
    return 0;
}


