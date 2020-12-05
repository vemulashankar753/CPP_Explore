#include <iostream>
#include <memory>
#include <thread>

using namespace std;

void print(){
   for(int i=0;i<10;i++){
      cout <<  std::this_thread::get_id() << " : " <<  i << endl;
   }
}

void subthread(){
  cout << "launching 2 other sub threads " << endl;
  std::thread t2(print);
  std::thread t3(print);
  t2.join();
  t3.join();

} 

int main(){


   std::thread t1(subthread);

   t1.join();

   return 0;

}

