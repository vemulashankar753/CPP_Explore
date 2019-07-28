#include <iostream>

#include <string>

using namespace std;

int  main(){

   string str1;
   cout << "Input a string" << endl;
   cin >> str1;
   cout << "str1 is:" << endl;


 /*  for (int i =0; i< str1.length(); i++){

     for (int j=0; j< (i*j)+1; j++){

        cout << str1.at(j) */

    for (int i=1 ; i<= str1.length(); i++){
       for(int j=0; j<(i*2)-1;j++)
        cout << str1.at(i-1) ;
       cout << endl;
    } 
       
    return 0 ;   

} 

             
