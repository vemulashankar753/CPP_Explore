#include <iostream>

#include <nlohmann/json.hpp>

using namespace std;

int main(){

 json j,j1;

 std::ifstream i1("92a2.json");
 std::ifstream i2("92a2m.json");

 i1 >> j;
 i2 >> j1;

 std::cout << std::setw(4) << j << std::endl;

 std::cout << std::setw(4) << j1 << std::endl;

 return 0;

}
 
