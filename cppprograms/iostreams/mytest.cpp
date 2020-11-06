
//Copying the data from one file to other file
#include <iostream>
#include <fstream>
#include <string>


using namespace std;


int main(){

   ifstream instr; 

   instr.open("/Users/svemul200/mylearning/MyCppLearning/cppprograms/iostreams/Student.txt");

   ofstream opstr;

   opstr.open("/Users/svemul200/mylearning/MyCppLearning/cppprograms/iostreams/Stdata.txt", std::ofstream::trunc) ;

   ofstream opstr1;

   opstr1.open("/Users/svemul200/mylearning/MyCppLearning/cppprograms/iostreams/Stdata.txt", std::ofstream::out | std::ios::binary | std::ofstream::app) ;

  if(!instr.is_open()){
    cerr << "file cannot be openeed" << endl;
  }

  if(!opstr.is_open()){
    cerr << "file cannot be openeed for writing" << endl;
  }

  string s = "shankar vemula goud" ;


  opstr1 << s; 
  

  instr.close();
  opstr.close();
  opstr1.close();

  return 0;
}



  
