#include <stdio.h>

int main(){
   float  x = 10.0;
   float y = 5.0;
   int z = 10;

   printf("Calculating the float value:10.010");
   //This gives compilation error  
   //invalid operands to binary expression: compilation error details
 //   int a = x%y;

//error: invalid operands to binary expression ('float' and 'int')
//   int b = x%10;

   int c = (int)(x)%10;

   printf("c value is: %d",c);
   //This also gives error as y is float
  // int d = (int)(x)%y;

   return 0;

}

