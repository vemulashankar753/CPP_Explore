#include <iostream>
#include <string>

using namespace std;



std::string (const std::string& in) {
    int x = 100000;
    auto indexer = [&x] (const boost::smatch& m) {
        return m[1] + std::to_string(x++) + " " + m[2] + "\": ";
    };

    cout << "string value: indexer is:"  << indexer;

  
 //   return boost::regex_replace(in, JSON_KEY_PLAIN, indexer);
}

