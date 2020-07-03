#include <iostream>
#include <memory>

using namespace std;

class Test{
private:
    int a;
public:
    Test(int i):a(i){
        cout << "Parameter construtor is called" << endl;
    }
};

void mydeleter(Test* t){
    cout << "Deleter is invoked for test object" << endl;
    delete t;
};

int main(){
    
    {
        cout << "Custom deleter using the function" << endl;
     shared_ptr<Test> sh {new Test(10), mydeleter};
    }
    
    {
        cout << "Custom deleter using the Lamda" << endl;
        shared_ptr<Test> Pt1 {new Test(100),
                                [](Test *t) {
                                       cout << "delete is called through lambda" << endl;
                                    delete t;}};
    }
    
    return 0;

}

