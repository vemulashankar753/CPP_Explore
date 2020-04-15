#include <iostream>
#include <string>
#include <map>

using namespace std;

struct book{
   int id;
   string name;
};

void dataman(int& i, struct book *b){
  i = 0;
//  b->id = 2;
//  b->name = "shankar";
}
 
using namespace std;

int main(){

   map<int,string> m1;
   struct book b1  {-1, "notapplicable"};;
   int a;
   dataman(a,&b1);
   m1[a] = b1.name;

   for(auto it = m1.begin(); it != m1.end(); ++it){
     cout << it->first  << "  " << it->second << endl;
   }  

   return 0;
}

