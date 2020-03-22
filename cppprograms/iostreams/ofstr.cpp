#include <iostream>
#include <fstream>
#include <string>


using namespace std;


int main(){

   ofstream opfile("outputstream.txt");

   if(opfile.is_open()){
     cout << "file cannot be opened" << endl;
   }

   string input;

   cout << "Plese enter the data to be written to the file" << endl;

   getline(cin,input);

   opfile << input << endl;

   return 0;

}

