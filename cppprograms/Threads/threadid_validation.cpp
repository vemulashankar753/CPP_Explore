#include <iostream>
#include <thread>
#include <unistd.h>

using namespace std;

bool isRunning()
{
	return std::thread.get_id() != std::thread::id();
}

void print(){
   cout << "This is Shankar" << endl;
   cout << this_thread::get_id() << endl;
   cout << "std::thread::id()" << std::thread::id() << endl;
 //  cout << "std::thread.get_id()" << std::thread.get_id() << endl;
   cout <<  thread.get_id() << endl;
   for(int i=0;i<10;i++){
      cout << "value of i is: " << i << endl;
      sleep(1);
   } 
}

/****Here the thread of the t, will be (just after starting and while running and in execution , it will be valid id like: 0x7ccc00) 
once the join execution is completed, it will become zero ***/

int main(){

   string s = "shankar";
   cout << "Main is called " << endl;
   std::thread t(print);
   cout << t.get_id() << endl;
   t.join();

   cout << t.get_id() << endl;

   cout << this_thread::get_id() << endl;

   bool x = isRunning();

   cout << x << endl;

   return 0;

}
