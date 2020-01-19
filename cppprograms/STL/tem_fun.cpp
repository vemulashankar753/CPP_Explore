//function templates

#include <iostream>
#include <string>

using namespace std;

//Single type (single template parameter function template) // or template <class T>
template <typename T>
T grt(T a, T b){
  return ((a>b) ? a: b);
}

template <typename T1, typename T2>
void pdetails(T1 a, T2 b){
  cout << a << " " << b << endl;
}

struct Person{

  std::string name;
  int age;

  Person(int a, std::string n):age(a),name(n){};

  bool operator >(const Person &rhs) const{
     return this->age > rhs.age;
  };  
};

template <typename T>
void myswap(T &a, T &b){
  T temp;
  temp = a;
  a = b;
  b = temp;
};


std::ostream& operator <<(std::ostream &os, const Person& p) {

  os << p.name;
  return os;

}

int main(){

   cout << grt<int>(10,20) << endl;
   cout << grt(10,20) << endl;
  
   cout << grt('a','d') << endl;

   pdetails(10,20.0);
   pdetails('a', 30.0);

   pdetails(40,40);

   Person p1 {20, "ant"};
   Person p2 {30, "Elephant"};   

   Person p3 = grt(p1, p2);

   cout << p3.age << "  " << p3.name << endl;

   pdetails(p1,p2); //If we call this without defining the osstream above it will give error that operator << is not overloaded.

   int x {10};
   int y {20};

   cout << "Before swap" << x << " " << y << endl;

   myswap(x,y);

   cout << "After swap" << x << " " << y << endl;

   return 0;

}
