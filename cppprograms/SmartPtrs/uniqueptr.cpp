#include <iostream>
#include <string>
#include <memory>

using namespace std;

class Test{
    int a;
    public:
    Test(int i):a(i){
        cout << "Default constructor is called with value a: " << a << endl;
    }
    void display(){
        cout << "value a: " << a << endl;
    }
    ~Test(){
        cout << "Destructor is called: " << a << endl;
    }
};

int main(){
   /* Test t2(200);
    Test *t1 = new Test(100);
    delete t1; */
    std::unique_ptr<Test> t3 {new Test(400)}; // When it goes out of scope desctructor is called automatically i.e memory will be deallocated automatically.
    std::unique_ptr<Test> t4 = std::make_unique<Test>(500);
    
    std::unique_ptr<Test> t7 = std::make_unique<Test>(600);
    
   //t3 = t4;//cannot be assigned because its copy assignment operator is implicitly deleted
    //cout << *t3 << endl;
    t3 = std::move(t4);
    
    if(!t4){ //t4 will be null, t3 will be reassigned to a new value of t4
        cout << "t4 value is null" << endl;
    }
    t3->display();
    
    t3.reset();
    
    if(!t3){ //t4 will be null, t3 will be reassigned to a new value of t4
        cout << "t3 value is null" << endl;
    }
    
    std::unique_ptr<Test> t5;
    
    t5 = std::move(t7);
    
    if(!t7){ //t4 will be null, t3 will be reassigned to a new value of t4
           cout << "t7 value is null" << endl;
    }
    
    t5->display();

    std::unique_ptr<int> p1 {new int {10}};
    cout << *p1 << endl;
    
    return 0;
}

/** Destructor is called automatically
 int main(){
     Test t1(100);
     return 0;
 } **/
 /* Destructor is  not called automatically
 int main(){
     Test *t1 = new Test(100);
     return 0;
 } */


/* Destructor is  not called automatically
int main(){
    Test *t1 = new Test(100);
         delete t1;
    return 0;
} */
