#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    istringstream iss(str);
    vector<int> v1;
    int s;
    char ch;
    while(iss >> s){
         v1.push_back(s);
         iss >> ch;
    }
    return v1;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
