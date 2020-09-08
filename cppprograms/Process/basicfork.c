#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
   printf("main process started\n");
   fork();
   printf("Called fork() system call\n");
   return 0;
}
