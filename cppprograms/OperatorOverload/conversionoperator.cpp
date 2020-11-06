#include <iostream>
#include <sstream>
#include <string>

using namespace std;


class Date{
private:
  int dd;
  int mm;
  int yy;
  string datestr;
public:
   Date(int d, int m, int y):dd(d),mm(m),yy(y){
   }

 operator const char*(){
    ostringstream formateedDate;
//    formateedDate << dd <<  ' / ' << mm <<  ' / ' << yy;//Compiler throws an error saying non-ascii characters will not be accepted: error details: "multi-character character constan" and output will be "42109216521092162016"
    formateedDate << dd << '/' << mm <<  '/' << yy;
    datestr = formateedDate.str();
    return  datestr.c_str();;

  }
};
int main(){
  Date holiday(4,5,2016);
  cout << holiday;
  return 0;
}




