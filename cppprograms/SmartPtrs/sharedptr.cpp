#include <iostream>
#include <string>
#include <memory>
#include <vector>

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
      //  cout << "Destructor is called: " << a << endl;
    }
};

void fun(std::shared_ptr<Test> m){
    cout << "in function: " << m.use_count() << endl;
};

class Account{
public:
    string name;
    Account(string s1):name(s1){
        cout << "Account constructor is called" << endl;
    }
};

class SavingAccount: public Account{
public:
    SavingAccount(string s1):Account(s1){
        cout << "Saving Account constructor is called" << endl;
    }
};

class CheckingAccount: public Account{
public:
    CheckingAccount(string s1):Account(s1){
        cout << "Checking Account constructor is called" << endl;
    }
};


int main(){
    
    {
    std::shared_ptr<int> p1 {new int {100}};
    std::cout  << p1.use_count() << endl;
    
    std::shared_ptr<int> p2 = p1; //copy consturctor or p2 {p1};
    std::cout  << p1.use_count() << endl;
    std::cout  << p2.use_count() << endl;
    
    std::shared_ptr<int> p3; //
    p3 = p1;
    
    std::cout  << p1.use_count() << endl;
    std::cout  << p2.use_count() << endl;
    std::cout  << p3.use_count() << endl;
    
    p1.reset(); // Reset / nulled out the p1, so it p1 use count will be zero
        
    cout << "After the p1 reset" << endl;

    std::cout  << p1.use_count() << endl;
    std::cout  << p2.use_count() << endl;
    std::cout  << p3.use_count() << endl;
    }
    
    {
   
    std::shared_ptr<Test> t1 = std::make_shared<Test>(100);
    std::cout  << t1.use_count() << endl;
    fun(t1);
    std::cout  << t1.use_count() << endl;
        {
            std::shared_ptr<Test> t2 = t1;
            std::cout  << t1.use_count() << endl;
            {
                std::shared_ptr<Test> t3 = t1;
                std::cout  << t1.use_count() << endl;
                t1.reset();
            }
        }
        
        std::cout  << t1.use_count() << endl;
    
    }
    
    {
        
        std::vector< std::shared_ptr<Account> > vs;
        std::shared_ptr<Account> a1 = std::make_shared<CheckingAccount>("checking");
        std::shared_ptr<Account> a2 = std::make_shared<SavingAccount>("saving");
        
        std::cout  << a1.use_count() << endl;
        std::cout  << a2.use_count() << endl;
        
        vs.push_back(a1);
        vs.push_back(a2);
        
        std::cout  << a1.use_count() << endl;
        std::cout  << a2.use_count() << endl;
        
       /* for( auto s: vs){
            std::cout  << s.use_count() << endl; //Use Count will become 3
        } */
        
        for( const auto& s: vs){
                   std::cout  << s.use_count() << endl;
                         
        }
        
        
        return  0;
        
    }

    return 0;
}
 



