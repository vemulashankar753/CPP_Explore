#include <sys/mman.h>

int main(){

  const char* shm_name[10] = "/DataSeg";

  int shmfd = shm_open(shm_name, O_CREAT|O_RDWR|O_TRUNC,0600);

  if(shmfd < 0){
    printf("Shared memory creation fails");
  }


  

