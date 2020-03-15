#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){

 string shan {};
 int i;
 double d;

 ifstream infile { "hello.txt" }; //{"hello.txt", ios::in}

 if(!infile.is_open()) { // if(infile)

  cerr << "error opening file" << endl;

 }

 cout << "reading the data from the file" << endl;
 infile >> shan;
 infile >> i;
 infile >> d;

 cout << shan << endl;
 cout << i << endl;
 cout << setprecision(6);
 cout << d << endl;

 infile.close();

}








