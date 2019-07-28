#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(){

   char sname[30] {};
   char fname[30] {};
   char lname[40] {};

   cout << "Enter the sname" << endl;
   cin >> sname;

/*   cout << "Enter the fname" << endl;
   cin >> fname;

   cout << "Enter the lname" << endl;
   cin >> lname; */
   
   char dname[50];
  
   strcpy(dname, sname);

   cout << "after copy" << dname << endl;

   strcat(dname, "Infosys");

   cout << "after add" << dname << endl;

//   strrev(dname);
   
   cout << "after Compare" << strcmp(dname, "eenadu")  << endl;

 //  cout << sname << "  " << fname << " " << lname << endl;

   return 0;

}

  
