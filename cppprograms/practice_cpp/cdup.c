#include <stdio.h>
#include<malloc.h>

int main(){

  int *p = 0;

  printf("the value of p is: %d", *p);
  p = (int *)malloc(sizeof(int));

//  *p = 7;
 p = 7;

  printf("the value of p is: %d", *p);

  return 0 ;

}

