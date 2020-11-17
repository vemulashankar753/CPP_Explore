#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

static void signalhandler(int sig){

   if(sig == SIGABRT){
      printf("abort signal is raised");
      exit(0);
    }else if (sig == SIGINT){
      printf("Cntrl+ C  signal is raised");
      exit(0);
    } 
}

int main(){

  signal(SIGINT, signalhandler);
  signal(SIGABRT, signalhandler); 

  char ch;
  printf("Enter a character to raise the abort signal \n");
  scanf("%c", &ch);
 
  if(ch == 'y'){
    abort(); 
  }

  return 0;
}
