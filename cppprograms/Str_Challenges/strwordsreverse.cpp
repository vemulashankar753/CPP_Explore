#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string reversewordbyword(string s){
    
    string l = s;
    string sub;
    std::reverse(l.begin(),l.end());
    
    while(l.length()> 0){
        size_t d = l.find('.');
        if(d != std::string::npos){
            string st = l.substr(0,d);
            cout << "substring till delimiter: " << st << endl;
            std::reverse(st.begin(),st.end());
            sub.append(st);
            sub.append(".");
            l.erase(0,d+1);
            cout << "After erasing the remain string is: " << l << endl;
        }else{
            string st = l;
            std::reverse(st.begin(),st.end());
            sub.append(st);
            l.erase(0,st.length());
        }
       
       
        cout << "main string is:" << l << endl;
    }
    
    return sub;

};



int main(){
    string m = "shank.mad.vrin.moksh";
     
    string newstr = reversewordbyword(m);
    
    cout << newstr << endl;
    
    return 0;
    
}
