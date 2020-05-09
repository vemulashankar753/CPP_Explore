#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string str = "This is the 1st day of weeks in days and many days in a year";
    
    size_t ps = str.find("day");
        
    while(ps != string::npos){
        cout << "day is found at position" << ps << endl;
        ps = str.find("day",ps+1);
    }
    
    return 0;
}
