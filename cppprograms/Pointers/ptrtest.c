#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){

  int *p = 0;
  //Below statement is gives a segmentation fault, as p is pointing to NULL as per above, memory is not allocated at all.
  //printf("the value of p is: %d", *p);

  if(p){
    cout << "P is not null " << endl;
  }else{
    cout << "P is null" << endl;
  }
  p = new int;
  *p = 7;
  printf("the value of p is: %d", *p);
/*  p = (int *)malloc(sizeof(int));

  *p = 7;
 // p = 7;

  printf("the value of p is: %d", *p); */

  return 0 ;

}

