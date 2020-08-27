/*Enter your code here. Read input from STDIN. Print your output to STDOUT*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


using namespace std;

int main()

{
    
   int a=0;
    
    std::string s1 = "shankar vemula";
    
     a = std::count_if(s1.begin(),s1.end(),[](char ch){
        return ch == 'a';
    });
    
    cout << a << endl;
    
}
    
   
 


