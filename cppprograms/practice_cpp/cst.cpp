#include <cstring>

#include <iostream>

int main(){

// char c[10] = "shankar12";
// char d[] = "shankar is working with infosys from last 5 years, its a great learning experience with infosys always";

 //both above and below declarations are same
 char c[10] {"shankar12"};
 char d[] {"shankar is working with infosys from last 5 years, its a great learning experience with infosys always"};
 char e[50];
 char f[50];

 std::cout << c << std::endl;
 std::cout << strlen(c)<< std::endl;

 std::cout << d << std::endl;
 std::cout << strlen(d)<< std::endl;

 cin.getline(e);

 cout << "e is" << e << endl;

 return 0;

}
