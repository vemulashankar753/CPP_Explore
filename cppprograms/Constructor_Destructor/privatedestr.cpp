#include <iostream>


using namespace std;

class Person{
  public:
   static void deletePersonObc(Person *p){
      delete p;
   }
  private:
    ~Person(){
       cout << "Private destructor is called " << endl;
     }
};

int main(){
   /*we cannot create an object on stack, when a class has a private destructor like below 
   It throws error as "error: variable of type 'Person' has private destructor"
   Person p1; */

   //But we can create an object on heap
   Person *p1  = new Person();
   //Below statement will not as "destructor is private" and compiler throws error as "error: calling a private destructor of class 'Person'"
 //  delete p1;

   //Solution to delte the above object is , define a static function	
   Person::deletePersonObc(p1);

   return 0;
}



