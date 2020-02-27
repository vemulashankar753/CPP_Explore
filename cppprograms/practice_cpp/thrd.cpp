#include <iostream>
#include <thread>
#include <string>

using namespace std;

//thread is calling a function pointer

void func(int n){

  for (int i =0;i<n ; i++){
    cout << i << endl;
  }
}

//A callable object
class fun_obj{

public:

  void operator()(int x){
     for (int i = 0; i < x; i++){ 
            cout << "Thread using function"
                  " object as  callable\n"; 
     } 
   }
};

int main(){

 cout << "Threads 1, 2, and 3 operatirng indepently" << endl;

 thread t1(func, 10);

 thread t2(fun_obj(),3);

 //define a lambda expression
 
 auto f = [](int x){
   for (int i=0;i<x;i++){
     cout << "thread using the lamda expression" << endl;
   }
 };


 thread t3(f,3);

 t1.join();
 t2.join();
 t3.join();


}

//Compiling the thread file
// g++ file.cpp -std=c++11 -lpthread


