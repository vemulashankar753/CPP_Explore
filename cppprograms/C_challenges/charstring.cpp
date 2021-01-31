#include <iostream>
#include <map>

using namespace std;

char* myfunction(char *del,  char* srcstr){
    cout << "function is called" << endl;
    char* newchar = new char[4];
//    char newchar[10];

  //    return newchar; //Will give an error, as the address of local variable is returned which is allocated on the stack
 
    int k = 0;
    newchar[0] = 'a';
    newchar[1] = 'b';
    newchar[2] = 'c';
    newchar[3] = '\0';

    return newchar;

} 
   
   /* for(int i=0;i<strlen(srcstr);i++){
       for(int j=0;j<strlen(del);j++){
          if(srcstr[i] != del[j]){*/

int main() {
    char ch1[6] = "hello";
    char ch2[3] = "eo";
    char *n = myfunction(ch1,ch2);
    for(int i=0;i<strlen(n);i++){
       cout << n[i] << endl;
    }

   return 0;

}
   


    

              
 


