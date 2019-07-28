#include <iostream>
#include <fstream>
#include  <jsoncpp/json/json.h>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/foreach.hpp>
#include "respon.h"


using namespace std;

int main(){
//#  ifstream is("respon.json",std::ifstream::binary) ;

/* if (is) {
    // get length of file:
    is.seekg (0, is.end);
    int length = is.tellg();
    is.seekg (0, is.beg);

    char * buffer = new char [length];

    std::cout << "Reading " << length << " characters... ";
    // read data as a block:
    is.read (buffer,length);

    if (is)
      std::cout << "all characters read successfully.";
    else
      std::cout << "error: only " << is.gcount() << " could be read";
    is.close();

    // ...buffer contains the entire file...

    delete[] buffer;
  } */ 
//  std::string jsonstr = str1;

//  cout << "the value of the string is:%s" << jsonstr << endl;

   
//  Json::Reader rd;
//  Json::Value obj;

/*  rd.parse(is,obj);

  std::cout << "the value of the json value is:" << obj << endl; 

  std::cout << "the vlaue of the shankar" << endl; */

}
