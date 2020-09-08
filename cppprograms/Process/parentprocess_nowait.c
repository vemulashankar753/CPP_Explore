#include<stdio.h>
#include <unistd.h>
int main() {
   int pid;
   pid = fork();
   
   // Child process
   if (pid == 0) {
     // system("ps -ef");
      printf("child process sleep started: with pid: %d\n", getpid());
      sleep(10);
      printf("after main process died \n");
      printf("child process exiting:with pid: %d \n", getpid());
     // system("ps -ef");
   } else {
      printf("main process sleep started: \n");
      sleep(3);
      printf("main process sleep started: \n");
   }
   return 0;
}
