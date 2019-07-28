#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include  <jsoncpp/json/json.h>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/foreach.hpp>
#include <map> 
#include "respon.h"

namespace prt =  boost::property_tree;
using namespace std;

std::map<std::string,std::string> m;

//#include "respon.h"
int rch = 0;

std::vector<prt::ptree> vt;
std::vector<std::string>::const_iterator i;

//void print(prt::ptree const& pt)
//{
//    int i =0;

//    std::cout << "beginning of the tree:" << std::endl; 
//    prt::const_iterator end = pt.end();
/*    for (prt::const_iterator it = pt.begin(); it != end; ++it) {
        std::cout << it->first << ": " << it->second.get_value<std::string>() << std::endl;
/*        std::cout << it->first << ": "  << std::endl;
        if(it->first == "RfChannel"){
           rch++;   
     //      std::cout <<  "Key is:" << it->first <<  std::endl;
           std::cout << "value is:" << it->second.get_value<std::string>() << std::endl;
        } */
/*        ++i;
        if (i == 1){
           break;
        } */
      //  print(it->second);
        
//    }
//    std::cout << "the no. of channels are" << rch << std::endl;
//} 

void subprocess(prt::ptree const& pt2){

        prt::ptree::const_iterator end1 = pt2.end();

        for (prt::ptree::const_iterator it1 = pt2.begin(); it1 != end1; ++it1) {

               std::cout << it1->first << " sub: key:value " << it1->second.get_value<std::string>() << std::endl;
         }

 }



void process(prt::ptree const& pt1){
      
          prt::ptree::const_iterator end = pt1.end();

          for (prt::ptree::const_iterator it = pt1.begin(); it != end; ++it) {  
           
//             std::cout << it->first << ":" << it->second.get_value<std::string>() << std::endl;
                if (it->first == "RfChannel"){
                   // vt.push_back(it->second.get_value<std::string>());
                      vt.push_back(it->second);
                    //std::cout << "vector value is" << vt << endl;
              //      prt::ptree subpt = it->second;
                  //  subprocess(subpt);
                }
           process(it->second);
           }

           //process(it->second);

}
  
void vt_process(prt::ptree const& pt1){
          int i = 0; 
          prt::ptree::const_iterator end = pt1.end();
          std::cout << "value of i: " << i << endl;


          for (prt::ptree::const_iterator it = pt1.begin(); it != end; ++it) {

           std::cout << "key:" <<  it->first << "   :value:" << it->second.get_value<std::string>() << std::endl;
       
           std::cout << "value of i: " << i << endl;

           if(it->first == "RfChannelIndex"){
             m[it->first] = it->second.get_value<std::string>();
           } else if (it->first == "outDiscards"){
             m[it->first] = it->second.get_value<std::string>();
           } else if (it->first == "outErrors") {
                m[it->first] = it->second.get_value<std::string>();
           } else if (it->first == "outPackets") {
                m[it->first] = it->second.get_value<std::string>();             
           }else if (it->first == "discontinuityTime") {
                m[it->first] =  it->second.get_value<std::string>();
           }
           i++;

           vt_process(it->second);
           }

}
            
int main(){

     prt ::ptree pt;

    //here str1 is the complete read response, which is hardcoded in "respon.h"(see above)  

     std::istringstream is(str1);

     prt::read_json(is, pt);
      
     process(pt);

      //  print(pt); 
     std::cout << "no.of RfChannel object are:" << vt.size() << std::endl;

     std::cout << "iterating through loop:" <<  endl;
     for(int i=0 ;i < vt.size();i++){

//     for(int i=0 ;i < 1;i++){
//        std::cout << "iterating through loop:" << i << endl;
        prt::ptree mainpt = vt[i];
        vt_process(mainpt);
        std::cout << "********************************************************" << endl;
     }    

     map<std::string,std::string>::iterator im;

     std::cout << "iterating through the map" << endl;

     for (im = m.begin(); im != m.end(); ++im)
      {
        cout  <<  '\t' << im->first 
              <<  '\t' << im->second << '\n';
      } 
    
        return 0;
}
