#include <iostream>

using namespace std;

class Test{

   private:
     int x,y;

   public:

    void setX(int x, int y){
      this->x = x;
      this->y = y;
    };
   
    void print(){
     
     cout << x << " " << y << endl;

    };

};

int main(){

   Test t1;
   t1.setX(10,20);
   t1.print();

   Test t2;
   t2.setX(30,40);
   t2.print();

}
  
  

    
   

   

