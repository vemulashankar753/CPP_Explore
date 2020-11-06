//#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <map>
#include <iostream>
#include <fstream>

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
    int sum = 0;
    for(int i= 0;i<26;++i){
       // std::cout << "a1: " << a1[i] << "b1: " << b1[i] << endl;
        sum += abs(a1[i]-b1[i]);
     }

    return sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}

