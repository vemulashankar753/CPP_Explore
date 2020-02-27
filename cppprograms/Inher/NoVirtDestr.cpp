#include <iostream>


using namespace std;


class Fish{

 public:
   Fish(){

     cout << "constrctor of fish called" << endl;
   }

   ~Fish(){
     cout << "destructor of fish called" << endl;
   }

};

class Tuna: public Fish{

 public:
   Tuna(){

     cout << "constrctor of tuna  called" << endl;
   }

   ~Tuna(){
     cout << "destructor of tuna called" << endl;
   }

};

void deletemyfish(Fish *f){

   delete f;
}


int main(){

   cout << "allocating tuna on free storage" << endl;

   Tuna *t1 = new Tuna;
   cout << "Deleting the Tuna on free storage" << endl;
   deletemyfish(t1);

   cout << "allocating tuna on stack storage" << endl;

   Tuna t2;

   cout << "Automatic destruction: goes out the scope release " << endl;

   return 0;

}

//Output
/*

allocating tuna on free storage
constrctor of fish called
constrctor of tuna  called
Deleting the Tuna on free storage
destructor of fish called
allocating tuna on stack storage
constrctor of fish called
constrctor of tuna  called
Automatic destruction: goes out the scope release
destructor of tuna called
destructor of fish called
*/
  

