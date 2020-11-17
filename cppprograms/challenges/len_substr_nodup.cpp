#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;


bool checkduplicate(string& s){
       map<char,int> m;
       size_t l = s.size();
       for(int i=0;i<l;i++) {
           char ch = s.at(i);
           m[ch]++;
           cout << "Map Values are " << ch << ": value :" << m[ch] << endl;
           if(m[ch] == 2){
               cout << "returning true" << endl;
               return true;
           }
       }
       return false;
}


int lengthOfLongestSubstring(string s) {
       
       int mx =1;
       bool dup = false;
       size_t n = s.length();
       
       for(int i=0;i<n;i++){
           string sub {};
           for(int j=0;j<=n;j++){
               sub = s.substr(i,j);
               cout << "sub string is:  " << sub << "i: " << i << " and j: " << j << endl;
               dup = checkduplicate(sub);
               if(dup){
                  dup =false;
                  break;
               }
               mx = std::max(mx,(int)sub.length());
               cout << "mx value is: " << mx << endl;
           }
       }
       cout << "max value is: " << mx <<  endl;
       return mx;
       
}
   

int main(){

    string str = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~"; 


      cout << "length of string is: " << str.length() << endl;
    int l = lengthOfLongestSubstring(str);
    
    cout << "l value is: " << l << endl;
    
    return 0;

    
}
