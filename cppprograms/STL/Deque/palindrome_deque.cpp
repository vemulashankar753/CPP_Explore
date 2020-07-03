//
//  Palindrome_deque.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 6/30/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//
#include <iostream>
#include <cctype>
#include <vector>
#include <deque>
#include <iomanip>
#include <string>

using namespace std;

bool ispalindrome(std::string s){
    std::deque<char> d;
    
    bool result = false;
   
    
    for(char c:s){
        if(std::isalpha(c)){
            d.push_back(toupper(c));
        }
        
    }
    
    char c1 {};
    char c2 {};
    
    if(d.size() == 1){
        return true;
    }
    
  /*  while(d.size()){
        cout << d.front();
        d.pop_front();
    } */
    
    while(d.size()>1){
        c1 = d.back();
        c2 = d.front();
        if(c1 == c2){
            result = true;
        }else{
            result = false;
            break;
        }
        d.pop_back();
        d.pop_front();
    }
    return result;
};

int main(){
    
    std::vector<std::string> ts{"a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana", "avid diva", "Amore, Roma", "A toyota is a toyota", "A santa at nasa", "this is palindrome"};
    
    std::cout << std::boolalpha;
    std::cout << setw(8) << std::left << "Result" << "String" << endl;
    
  /*  int i = 0;
    
    std::vector<int> v1 {1,2,3,4,5};
    for(auto& e:v1){
        cout << "i value is:" << e << endl;
    } */
    
    for(const auto& s:ts){
        std::cout << setw(20) << std::left << ispalindrome(s) << std::setw(55) << std::right << s << endl;
    }

    return 0;
    
    
}


