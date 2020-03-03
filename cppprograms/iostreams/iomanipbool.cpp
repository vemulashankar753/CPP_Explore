//Using the io manipulators for the Boolean

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

   //Default behaviour(without manipulators)
   cout << "display boolean value: " << (10==10) << endl;
   cout << "display boolean value: " << (10==20) << endl;


   //With boolaplha manipulator
   cout << boolalpha;
   cout << "display boolean value: " << (10==10) << endl;
   cout << "display boolean value: " << (10==20) << endl;


   //With boolaplha manipulator
   cout << noboolalpha;
   cout << "display boolean value: " << (10==10) << endl;
   cout << "display boolean value: " << (10==20) << endl;


   //Using the setf methdo
   cout << cout.setf(ios::boolalpha);
   cout << "display boolean value: " << (10==10) << endl;
   cout << "display boolean value: " << (10==20) << endl;

   //Reset the boolalpha
   cout << resetiosflags(ios::boolalpha);
   cout << "display boolean value: " << (10==10) << endl;
   cout << "display boolean value: " << (10==20) << endl;

   return 0;

}
   

