//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {

    string s1 = a, s2 = b;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
   

    if(s1.compare(s2) == 0){
        return 0;
    }
    
    int a1[26], b1[26];
    for(int i=0;i<26;i++){
        a1[i] = 0;
        b1[i]=0;
    }

    int k= 0;
    for(char ch = 'a'; ch <= 'z'; ++ch ){
        unsigned int i = std::count_if(s1.begin(),s1.end(),[&ch](char c){
            return ch == c;
        });
        a1[k] = i;
        ++k;
    }
    
    k = 0;
    
    for(char ch = 'a'; ch <= 'z'; ++ch ){
        unsigned int i = std::count_if(s2.begin(),s2.end(),[&ch](char c){
            return ch == c;
        });
        b1[k] = i;
        ++k;
    }
    
    for(int i= 0;i<26;++i){
        std::cout << "a1: " << a1[i] << "b1: " << b1[i] << endl;
     }
    


    return 0;

}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

//    string a;
//    getline(cin, a);
//
//    string b;
//    getline(cin, b);
    
    string a = "shankar vemula";
    string b = "vrinda vemula";

    int res = makeAnagram(a, b);

   // fout << res << "\n";

    //fout.close();

    return 0;
}


