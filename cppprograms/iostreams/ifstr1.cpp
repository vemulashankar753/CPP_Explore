#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){

 string shan {};
 int i;
 double d;

 ifstream infile { "hello1.txt" }; //{"hello.txt", ios::in}

 if(!infile.is_open()) { // if(infile)

  cerr << "error opening file" << endl;

 }

/* while(!infile.eof()){ //Or while(infile >> shan >> i >> d)

   infile >> shan >> i >> d;
   cout << setw(10) << left << shan
        << setw(10) << i 
        << setw(10) << d;
   cout << endl;

  }*/

/* cout << "reading the data from the file" << endl;
 infile >> shan;
 infile >> i;
 infile >> d;

 cout << shan << endl;
 cout << i << endl;
 cout << setprecision(6);
 cout << d << endl; */

/* cout << "reading the each line of a file using the stream" << endl;

 std::string line;

 while(getline(infile,line)){
    cout << line << endl;
 } */

 cout << "reading the data in unformatted way" << endl;
 char ch {};

 while(infile.get(ch)){
   cout << ch ;
 }
 
 infile.close();

}








