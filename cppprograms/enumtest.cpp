#include <iostream>
#include <string>

using namespace std;

enum Color {
    Red=0,
    Green,
    Blue,
    Pink,
    Violet,
    Purple
};



int main(){
    
    cout << "Displaying enum values and their declarations" << endl;
    cout << "Red: " << Red << endl;
    cout << "Green: " << Green << endl;
    cout << "Blue: " << Blue << endl;
    cout << "Pink: " << Pink << endl;
    cout << "Violet: " << Violet << endl;
    cout << "Purple: " << Purple << endl;
    
    Color newcolor = Blue;
    
    cout << "Varialbe new color: " << newcolor << endl;
    
    return 0;
}

/**
Displaying enum values and their declarations
Red: 0
Green: 1
Blue: 2
Pink: 3
Violet: 4
Purple: 5
Varialbe new color: 2 **/

