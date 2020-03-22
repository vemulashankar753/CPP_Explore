#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;

int main(){

  int num {};
  double d {};
  string name {};

  string info {"12  10.25 shankar"};

  istringstream iss{info};

  iss >> num >> d >> name;

  cout << "the info values are: " << num << " " << d  <<  " " << name << endl;

  cout << setw(10) << left << name  
       << setw(5) << num
       << setw(5) << d  << endl;

  /*******using ostringstream now********/

  ostringstream oss{};

  oss << setw(10) << left << name
      << setw(5) << num
      << setw(5) << d << endl;

  std::cout << oss.str() << endl;

  /********* Data Validating the input********/ 

  int value {};

  string entry;

  bool valid = false;

 do{

  cout << "enter the input as an integer" << endl;

  cin >> entry ;

  istringstream validator {entry};

  if (validator >> value){
     valid = true;
  }else{
    cout << "This is not an integer" << endl;
  }

  cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

 }while(!valid);

 cout << "You have entered an integer" << value << endl;

  return 0;

}

/********

enter the input as an integer
12
You have entered an integer12
sh-3.2# ./a.out
the info values are: 12 10.25 shankar
shankar   12   10.25
shankar   12   10.25

enter the input as an integer
12 shankar vemula
You have entered an integer12
******/  
