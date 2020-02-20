#include <iostream>

using namespace std;

template <typename T>
class item{

  private:
  T t1;
  string name;

  public:
   item(T t,std::string s1):t1(t),name(s1){
    cout <<"constructor is called" << endl;
   };

   void printitem(){
     cout << "Type is: " << t1 << "name is" << name << endl;
   }
};
int main(){

   item<int> it1(1, "shan");
   it1.printitem();

   item<string> it2("shankar", "vrind");

   it2.printitem();

   return 0;

}

  

