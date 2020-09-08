#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
    printf("Main process is called \n ");
    
    int result;
    printf("Before fork: Process id is %d\n",getpid());;
    result = fork();
    
    if(result < 0){
        printf("Child process creation is failed \n ");
    }
    //Child Process
    if(result == 0){
        printf("Child  process is created successfully \n ");
        int pid = getpid();
        int ppid = getppid();
        printf("Child: Parent Process pid: %d \n",ppid);
        printf("Child: child process pid: %d \n",pid);
    }else{
        printf("Parent  process is created successfully \n ");
        int pid = getpid();
        int ppid = getppid();
        printf("Parent: Parent Process pid: %d \n",ppid);
        printf(" Parent: Main process pid: %d \n",pid);
    }
    return 0;
}
/*
Main process is called 
 Before fork: Process id is 11406
Parent  process is created successfully 
 Parent: Parent Process pid: 11407 
 Parent: Main process pid: 11406 
Child  process is created successfully 
 Child: Parent Process pid: 11406 
Child: child process pid: 11408  */
