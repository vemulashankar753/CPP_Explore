#include <signal.h>
#include <stdio.h>

int main(int argc, char **argv){

  kill(61167,SIGUSR1);
  scanf("\n");
  return 0;
} 
