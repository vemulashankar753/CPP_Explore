#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;

int find_grades(const string s1, const string s2){

 int grade = 0;
 for(int i =0; i<s1.length();++i){

   if(s2.find(s1[i]) != string::npos){
     grade++;
   }
 }

 return grade;

}


int main(){

   ifstream data("Student.txt");

   if(!data.is_open()){

     cout << "Unable to open the file" << endl;
   }

   std::string key {};

   std::string line {};

   vector<string> name,pdata,grades; 

   int i = 0;

   while(getline(data,line)){

     if(i==0){
       key = line;
       cout << "key is" << key <<  endl;
     }else if(i%2 == 0){
       cout << "pdata is" << line <<  endl;
       pdata.push_back(line); 
     }else{
       cout << "name is" << line <<  endl;
       name.push_back(line); 
     }
    i++;
  }


/*****
   string name, pdata;
   data >> key;

   while(data >> name >> pdata){
*******/


  for(string &s1: pdata){
   int grade = 0;
    grade = find_grades(key,s1);
    cout << "grades are" << grade << endl;
    grades.push_back(to_string(grade));
  }

  string s {};

  cout << setw(30) << left << "Student" << "Marks" << endl;

  cout << setw(40) <<  setfill('*') <<  s << endl; 

  cout << setfill(' ');

  for(int i = 0;i < pdata.size() ; ++i){
    cout << setw(30) << left << name[i] << grades[i] << endl;
  }

  name.clear();
  pdata.clear();

  return 0;

}//endl
          


     
         
  

  

