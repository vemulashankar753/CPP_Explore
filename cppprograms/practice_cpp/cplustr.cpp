#include <iostream>
#include <string>
#include <sstream>

using namespace std; //or use std::string

int main(){

 string s1; //Value is not garbage, it is empty
 string s2 {"Apple"};
 string s3;
 string s4 {};

 cout << "s1 value: "  << s1 << " lenght is:" << s1.length() << endl;

 cout << "Input the value for s3" << endl;
 getline(cin,s3);
 cout << "s3 is:" << s3 << endl; 

 cout << "Input the value for s4" << endl;
 getline(cin, s4);

 cout << "s4 is:" << s4 << endl; 

 size_t ind = s4.find("shan", 0);

 int num = 0;

 while(ind != string::npos){
  num++;
  ind = s4.find("shan", ind+1);
 }

 cout << "Shan key word is found" << num << "times in s4" << endl;


}

   

  
