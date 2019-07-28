#include <iostream>
#include <string>

using namespace std;


int main(){

   string str1 {"abcdefghijk"};
   string str2 {"XYZABCEDFQI"};

   cout << "Enter the secret message" << endl;
   string secretmessage {};

   getline(cin,secretmessage);

   cout << "secret message is: " << secretmessage << endl;

   string dmsg {};

   cout << "decrypted message is:" << endl; 

   for (size_t i = 0; i < secretmessage.length(); i++){
        cout << "secret message char : " << secretmessage.at(i) << "  " << (int)secretmessage.at(i) << endl;
        int pos = (int)secretmessage.at(i);

        if(pos >=97){
           pos = pos-97;
        }else{
           pos = pos-65;
        } 
        cout << "pos value is:  " << pos << endl;
    
        dmsg = dmsg+str2.at(pos);
    }

   cout << "decrypted message is:" << dmsg <<  endl; 

   return 0;

}


