#include <iostream>

using namespace std;

class Aka{
private:
   mutable int i;
   const string s;
public:
    Aka():i(0),s(""){
        
    }
    
    Aka(const Aka& source):i(source.i),s(source.s){
    }
    string getstring() const{
        i++;
        return s;
    }
};

int main(){
    Aka a1;
    Aka a2 = a1;
    
}
