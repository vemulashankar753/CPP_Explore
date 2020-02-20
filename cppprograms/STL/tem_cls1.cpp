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
   }

   void printitem(){
     cout << "Type is: " << t1 << "name is" << name << endl;
   }

   T getType(){
     return t1;
   }

};
int main(){

   item<int> it1(1, "shan");
   it1.printitem();

   item<string> it2("shankar", "vrind");

   it2.printitem();

   item<item<string>> it3  {{"shankar", "vrind"}, "Madhavi"};

   item<string> it4 = it3.getType();

   it4.printitem() ;

   return 0;

}

  

