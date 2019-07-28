#include <iostream>
#include <string>
#include <stdio.h>
#include <memory>
#include <cstring>

using namespace std;
#define MAX_BUF 10000

int readfun(unsigned char *rbuf){

    unsigned char lbuf[MAX_BUF] = "shankar is working with infosys";
    cout << "size of char is" << sizeof(lbuf) << endl;

    memcpy(rbuf,lbuf, sizeof(lbuf));

    return 0;
}


int main(){

  cout << "programming started" << endl;

  while(1){
   
    unsigned char buf[MAX_BUF];
    cout << "the value of the buf is" << buf << endl;
 }

}

    
    
   
