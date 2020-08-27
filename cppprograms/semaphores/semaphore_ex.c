//
//  Semaphore_ex.c
//  CPP_Learning
//
//  Created by Shankar Vemula on 8/26/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//

#include <stdio.h>
#include <semaphore.h>
#include <pthread.h>
#include <unistd.h>

sem_t mutex;

void* printthread(void* arg){
    sem_wait(&mutex);
    
    printf("\n Entered..\n");
    
    //criticla section
    sleep(4);
    
    printf("\n Just Exiting..\n");
    
    sem_post(&mutex);
   
}

int main(){
    sem_init(&mutex, 0, 5);
    pthread_t t1,t2;
    pthread_create(&t1,NULL,printthread,NULL);
    sleep(2);
    pthread_create(&t2,NULL,printthread,NULL);
    
    pthread_join(t1,NULL);
    pthread_join(t2,NULL);
    
    sem_destroy(&mutex);
    
    return 0;
    
}

