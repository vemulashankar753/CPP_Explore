#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    ifstream f("/Users/svemul200/Desktop/Test/SampleCSVFile_2kb.csv",ios::binary);

    if(!f){
      cout << "There is an issue in opening the file" << endl;
    }

    string line;

    
    while(getline(f,line)){

       cout << "Each line is:  " << line << endl;

       stringstream s(line);
       string elm;

       while(getline(s,elm,',')){
           cout << elm << " : ";
       }
       cout << endl;
       
    }
   
    return 0;

}
