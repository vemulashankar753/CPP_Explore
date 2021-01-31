#include <iostream>
#include <string>

using namespace std;

struct X {
    //implicit conversion
    operator int() const { return 7; }
 
    // explicit conversion
    //explicit operator int*() const { return nullptr; }
    explicit operator int*()  { return *this; };
 
//   Error: array operator not allowed in conversion-type-id
   operator int(*)[3]() const { return nullptr; }
    using arr_t = int[3];
    operator arr_t*() const { return nullptr; } // OK if done through typedef
//  operator arr_t () const; // Error: conversion to array not allowed in any case
};
 
int main()
{
    X x;
 
    int n = static_cast<int>(x);   // OK: sets n to 7
    int m = x;                     // OK: sets m to 7

    cout << "value of n is: " << n << endl;
    cout << "value of m is: " << m << endl;

    int* p = static_cast<int*>(x);  // OK: sets p to null

    cout << "value of *p is: " << *p << endl;;

//  int* q = x; // Error: no implicit conversion
 
    int (*pa)[3] = x;  // OK
}
