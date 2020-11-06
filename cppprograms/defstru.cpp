#include <iostream>
#include <string>

using namespace std;

struct st{
  int id;
  string name;
};

int main(){

  /* st a;
   cout << a.id << endl;
   cout << a.name << endl; */

   st *a = new st();
   cout << a->id << endl;
   cout << a->name << endl;
   delete a;
   return 0;
}

