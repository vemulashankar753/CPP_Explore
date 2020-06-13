//
//  BinaryPredicate.cpp
//  CPPTest
//
//  Created by Shankar Vemula on 5/10/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//

//This BinaryPredicate is used to sort a Vector of String to perform Case insensitive operation
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <string>
#include <algorithm>
//
//using namespace std;

class CmpStringNoCase{
  public:
   bool operator()(const std::string& s1, const std::string& s2){
        std::string s3, s4;
       
       //Here Resizing is very imporant, without that Soring will not be done.
       s3.resize(s1.size());
       s4.resize(s2.size());
        transform(s1.begin(),s1.end(),s3.begin(), ::tolower); //converting s1 to lower case and writing to s3;
        transform(s2.begin(),s2.end(),s4.begin(), ::tolower); //converting s2 to lower case and writing to s4;
         return (s3 <s4);
}
};

template <typename T>
void DisplayContents(const T& t){
    for(auto it = t.begin(); it != t.end(); ++it){
        std::cout << *it << std::endl;
    }
}

int main(){
    std::vector<std::string> vstr;
    vstr.push_back("jim");
    vstr.push_back("Jack");
    vstr.push_back("Sam");
    vstr.push_back("Anna");
    
    std::cout << "Displaying the contents of vector" << std::endl;
    
    DisplayContents(vstr);
    
    std::sort(vstr.begin(), vstr.end());
    
    std::cout << "Displaying the contents of vector after default sort" << std::endl;
       
    DisplayContents(vstr);
    
    //Sorting to perform a Case insensitive operation
    std::sort(vstr.begin(), vstr.end(),CmpStringNoCase());
    
    std::cout << "Displaying the contents of vector after binary  sort predicate" << std::endl;
    
    DisplayContents(vstr);
    

    
}






