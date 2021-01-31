//
//  shallowcopy.cpp
//  
//
//  Created by Shankar Vemula on 10/3/20.
//

/**NOTE**: Here as the copy constructor is not defined, shallow coping is done, it means, both object n1, and copy constructor objects point to the same memory location. When the printname is done, destructor
will be called, memory will be deleted, when the main scope is also done, destructor will be called again, which will cause crash(or abort) , trying to deleted already allocated memory**/

#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class Mystr{
private:
    char *name = nullptr;
    
    public:
    
    Mystr(const char *s){
        cout << "default constructor is called" << endl;
        if(s != nullptr){
            int l = std::strlen(s)+1;
            name = new char[l];
            std::strcpy(name,s);
        }
    }
    ~Mystr(){
        cout << "destructor is called" << endl;
        delete[] name;
    }
    const char* getname(){
        return name;
    }
};

void printname(Mystr s){
    cout << s.getname() << endl;
}

int main(){
    Mystr n1("shankarvemula");
    printname(n1);
    cout << "===============" << endl;
//    printname(n1);
}

/*****
default constructor is called
shankarvemula
destructor is called
destructor is called
a.out(31804,0x113d3fdc0) malloc: *** error for object 0x7fe96e704160: pointer being freed was not allocated
a.out(31804,0x113d3fdc0) malloc: *** set a breakpoint in malloc_error_break to debug
Abort trap: 6
*******/
