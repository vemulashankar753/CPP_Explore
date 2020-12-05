#include <iostream>
#include <thread>
#include <unistd.h>

using namespace std;

void print(){
   cout << "This is Shankar" << endl;
   cout << this_thread::get_id() << endl;
   for(int i=0;i<10;i++){
      cout << "value of i is: " << ++i << endl;
      sleep(1);
   } 
}

void print1(){
   cout << "This is print1" << endl;
   cout << this_thread::get_id() << endl;
   for(int i=0;i<10;i++){
      cout << "print1: value of i is: " << ++i << endl;
      sleep(1);
   } 
}
/****Here the thread of the t, will be (just after starting and while running and in execution , it will be valid id like: 0x7ccc00) 
once the join execution is completed, it will become zero ***/

int main(){

   string s = "shankar";
   cout << "Main is called " << endl;
   std::thread t(print);
//   cout << t.get_id() << endl;
   t.join();

 //  cout << t.get_id() << endl;

   std::thread *t2 = new thread(print);

 

   cout << this_thread::get_id() << endl;

   return 0;

}
