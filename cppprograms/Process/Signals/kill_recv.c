#include <signal.h>
#include <stdio.h>
#include <unistd.h> 

static void signal_handler(int sig){
   printf("signal %d received \n", sig);
}

int main(int argc, char **argv){

  signal(SIGUSR1, signal_handler);

  int pid = getpid();

  printf("pid is: %d", pid);

  scanf("\n");
  
  return 0;

}
