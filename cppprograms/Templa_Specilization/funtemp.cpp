#include <iostream>
#include <string>

using namespace std;

template <typename T>
void printfun(T t){
    cout << "Printing the passed variable: " << t << endl;
};

template <>
void printfun(string s){
    cout << "Printing the passed variable(as string) " << s << endl;
}



int main(){
    
    printfun<int>(10) ; //Or //printfun(10);
    printfun<char>('c');// Or //printfun('c');
    printfun<double>(11.0); //Or printfun(11.0);

    printfun<string>("shankar");
   

}

