#include <iostream>
#include <string>

using namespace std;


class Shallow{

  private:
   int *data;

  public:

  void setdata(int d){
    *data = d;
  }

  int getdata(){
    return *data;
  }

  Shallow(int d);

  Shallow(const Shallow &s);

  ~Shallow(){
    delete data;
    cout << "destructor is called" << endl;
   }

};

Shallow::Shallow(int d){
  cout << "constructor is called" << endl;
  data = new int;
  *data = d;
 };

Shallow:: Shallow(const Shallow &s)
    :data(s.data){
   cout << "copy constructor is called: Shallow copy"  << endl;
};

void display(Shallow s){
   cout << "value of data: " << s.getdata() << endl;
}
   

int main(){

   Shallow s1 {100};

   display(s1); //it will create of copy of s1. Now s1 and copy will point to same heap or memory area
  // Below line will crash, because s1 goes outof scope 
//   s1.setdata(200);
 //  cout << "data is" <<  s1.getdata() << endl;

   Shallow s2 {s1};

   cout << "Hello World" << endl;

   return 0;

} 

   



  
