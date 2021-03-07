#include <string>
#include <iostream>


using namespace std;

int main(){

   string s = "<shankarvemula>";

   string s1 = s.substr(1,s.length()-2);

   cout << s << endl;
   cout << s1 << endl;

   return 0;

}

