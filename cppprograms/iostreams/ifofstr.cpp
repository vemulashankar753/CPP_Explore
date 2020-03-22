
//Copying the data from one file to other file
#include <iostream>
#include <fstream>
#include <string>


using namespace std;


int main(){

  ifstream instr {"Student.txt"};
  ofstream opstr {"Stdata.txt"};

  if(!instr.is_open()){
    cerr << "file cannot be openeed" << endl;
  }

  if(!opstr.is_open()){
    cerr << "file cannot be openeed for writing" << endl;
  }


  //Below lines of code is for the formatted way of copying the file
/*  string line {};

  while(getline(instr,line)){

   opstr << line << endl;
  } */

 /** Unformatted way of copying the data from one file to other file*/
  char c;
  while(instr.get(c)){
   opstr.put(c);
  }

  instr.close();
  opstr.close();

  return 0;
}



  
