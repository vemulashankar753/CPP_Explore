#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


using namespace std;

bool ispalindrome(string s){
    string rs = s;
    std::reverse(rs.begin(),rs.end());
    if(s == rs ){
        return true;
    }else{
        return false;
    }
}

int main(int argc, char *a[])
{
    unsigned n;
   // cout << "Enter a input" << endl;
    cin >> n;
    
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector<string> vstr;
    for(int i=0;i<n;i++){
        string s;
       // cout << "enter the string: " << i << endl;
        getline(cin,s);
        vstr.push_back(s);
    }
    
    // for(auto& str: vstr){
    //     cout << str << endl;
    // }
    
    for(auto &s1: vstr){

     
        //cout << s1 << endl;
        s1.erase(std::remove_if(s1.begin(),s1.end(),[](char ch){
            if( ch != 'a' && ch != 'e' && ch != 'o' && ch != 'i' && ch != 'u'){
               // cout << "each char is" << ch << endl;
                return true;
            } else {
                return false;
            }
        }),s1.end());

        if(s1.length() == 1){
            cout << "YES" << endl;
            continue;
        }
        
        //cout << s1 << endl;
        bool pal = ispalindrome(s1);
        if(pal){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
     }
    
    //(ch != 'a' || ch != 'e' || ch != 'o' || ch != 'u');
}
