#include <stdio.h>
#include <fcntl.h>           /* For O_* constants */
#include <sys/stat.h>        /* For mode constants */
#include <mqueue.h>

//#define MSGQ  "/tmp/msgque.txt"

const char msgname[] = "/tmp/msgque.txt"; 

int main(){

  mqd_t clntmq;

  clintmq =  mq_open(msgname, O_CREATE|O_RDONLY);

  if(clintmq != 1){
    print("error in opening the message queue");
  }

  do{
    print("enter the data to be send\n");

    char buff[50];
    memset(buff,0,sizeof(buff));
    scanf("%s",buff);

    int read = mq_receive(clintmq,buff,sizeof(buff),
     

}
