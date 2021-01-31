#include <stdio.h> 
int main() 
{ 
    int i = 3; 
   // printf("%d", i++); 3 
  //  printf("%d", ++i); 4
    printf("%d", (++i)++); //Gives compilation error
    return 0; 
} 

