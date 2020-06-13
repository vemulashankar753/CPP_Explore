#include <iostream>
#include <string>

using namespace std;

int main(){
    cout << "size of bool: " << sizeof(bool) << endl;
    cout << "size of char: " << sizeof(char) << endl;
    cout << "size of unsigned short int: " << sizeof(unsigned short) << endl;
    cout << "size of  short int: " << sizeof(short) << endl;
    cout << "size of unsigned long int: " << sizeof(unsigned long) << endl;
    cout << "size of long : " << sizeof(long) << endl;
    cout << "size of int : " << sizeof(int) << endl;
    cout << "size of unsigned int : " << sizeof(unsigned int) << endl;
    cout << "size of unsigned long long : " << sizeof(unsigned long long) << endl;
    cout << "size of long long : " << sizeof(long long) << endl;
    
    cout << "size of float : " << sizeof(float) << endl;
    cout << "size of double : " << sizeof(double) << endl;
    
    return 0;
}
/*
size of bool: 1
size of char: 1
size of unsigned short int: 2
size of  short int: 2
size of unsigned long int: 8
size of long : 8
size of int : 4
size of unsigned int : 4
size of unsigned long long : 8
size of long long : 8
size of float : 4
size of double : 8 */
