#include<stdio.h>
#include <unistd.h>
int main() {
   int pid;
   int status;
   pid = fork();

   // Child process
   if (pid == 0) {
     // system("ps -ef");
      printf("child process sleep started: with pid: %d\n", getpid());
      sleep(10);
      printf("after main process died \n");
      printf("child process exiting:with pid: %d \n", getpid());
     // system("ps -ef");
       return 3; //exit status is 3 from child process
   } else {
      printf("main process sleep started: \n");
      sleep(3);
      wait(&status);
      printf("In parent process: exit status from child is decimal %d, hexa %0x\n", status, status);
      printf("main process sleep started: \n");
   }
   return 0;
}

