#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s = "abbaabbabbbbaaaa";

    int n = std::count(s.begin(),s.end(),'a');
    cout << n << endl;
    
    return 0;
 
}
