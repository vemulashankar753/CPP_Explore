#include <iostream>
#include <fstream>
#include <streambuf>
#include <cstring>
#include <boost/filesystem.hpp>

using namespace std;

namespace fs = boost::filesystem;

int main(){

  string base_url_ = "shanr";
  string mac_lc = "myfile";

  auto mac_file = fs::path(base_url_) / (mac_lc + ".json");

  string s;


  if (exists(mac_file)) {
        std::ifstream ifs(mac_file.string(), std::ios::binary);
        string str ((std::istreambuf_iterator<char>(ifs)),
                            (std::istreambuf_iterator<char>()));

        s = str;
   //  cout << s << endl;
   }else{
    cout << "it does not exist" << endl;
   }
   cout << s << endl;

   return 0;
}
