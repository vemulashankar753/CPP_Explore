
#include<iostream> 
using namespace std;


class Test1{

  private:
    int x;

  public:
   
    Test1(int x = 0){

       this->x = x;
    };

    void change(Test1  *t){
      this = t;
    };

    Test1 operator=(const Test1& t){
       Test1 *t1 = new Test1();
       t1->x  = t.x;
       return *t1;
    } 

    void print(){
     cout << "x = " << x << endl;
    };

};

int main() {

   Test1 obj(5);

   obj.print();
   
   Test1 *ptr = new Test1(10);
   ptr->print();

   obj.change(ptr);
   obj.print();

   return 0;

} 
   

   

     
 
    

