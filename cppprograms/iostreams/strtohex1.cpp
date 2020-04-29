#include <iostream>
#include <sstream>
#include <bitset>
#include <string>

using namespace std;

int main()
{
 //   string s = "0xA";
    string s = "0034";
    stringstream ss;
    ss << hex << s;
    unsigned n;
    ss >> n;
    bitset<16> b(n);
    // outputs "00000000000000000000000000001010"
    string newstr = b.to_string();
    cout << newstr << endl;
    //cout << b.to_string() << endl;
}
