#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main(){

  // std::vector<int> v1 {1,3,5};
   std::vector<string> v1 {"shankar", "madh", "krish"}; 
   cout << v1.at(0) << endl;
   try {
    int t  = stoi(v1.at(4));

    //cout << stoi("1234") << endl;
   }catch(std::exception& e){
     cout << "it is outof bound array: " << e.what() << endl;
   }


   return 0;
}


