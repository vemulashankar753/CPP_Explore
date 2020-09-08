#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>

int main() {
   int pid;
   //system("ps -f");
   pid = fork();
   if (pid == 0) {
      printf("Child: pid is %d and ppid is %d\n",getpid(),getppid());
      sleep(5);
      printf("Child: pid is %d and ppid is %d\n",getpid(),getppid());
      system("ps -f");
   } else {
      printf("Parent: pid is %d and ppid is %d\n",getpid(),getppid());
      sleep(2);
      exit(0);
   }
   return 0;
}
/*
Parent: pid is 11795 and ppid is 11150
Child: pid is 11796 and ppid is 11795
sh-3.2#
sh-3.2#
sh-3.2#
sh-3.2# Child: pid is 11796 and ppid is 1
  UID   PID  PPID   C STIME   TTY           TIME CMD
    0 11148 99696   0  9:07PM ttys002    0:00.05 sudo su
    0 11149 11148   0  9:07PM ttys002    0:00.02 su
    0 11150 11149   0  9:07PM ttys002    0:00.08 sh
    0 11796     1   0 10:11PM ttys002    0:00.00 ./a.out
    0 11797 11796   0 10:11PM ttys002    0:00.01 ps -f
    0 99695 99694   0  9:28AM ttys002    0:00.11 login -fp svemul200
    0 33824 33823   0 24Aug20 ttys005    0:00.07 login -fp svemul200
    0 34499 34498   0 24Aug20 ttys006    0:00.08 login -fp svemul200
    0 99886 34500   0  9:33AM ttys006    0:00.02 sudo su
    0 99887 99886   0  9:33AM ttys006    0:00.03 su
    0 99888 99887   0  9:33AM ttys006    0:00.05 sh */
