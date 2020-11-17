#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

static void  signalhandler(int sig){
   if(sig == SIGABRT){
      printf("signal is raised and caught");
    }else if (sig == SIGINT){
      printf("Cntrl+ C  signal is raised and caught");
    } 
}

int main(){

  int seg;

 // signal(SIGINT, signalhandler);
  seg =  (int )signal(SIGABRT, signalhandler); 
 
  printf("raising a signal abort system call using the raise() system call");

  seg  = raise(SIGABRT);

  if(seg != 0){
    printf("unable to raise signal");
    exit(0);
  }

  printf("Exiting\n ");
}
