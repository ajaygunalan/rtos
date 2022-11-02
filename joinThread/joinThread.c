#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include <sched.h>

#define NUM_THREADS 64

typedef struct
{
    int threadIdx;
} threadParams_t;


// POSIX thread declarations and scheduling attributes
pthread_t threads[NUM_THREADS];
threadParams_t threadParams[NUM_THREADS];


void *counterThread(void *threadp)
{
    int sum=0, i;
    threadParams_t *threadParams = (threadParams_t *)threadp;

    for(i=1; i < (threadParams->threadIdx)+1; i++)
        sum=sum+i;
 
    printf("Thread idx=%d, sum[1...%d]=%d\n", 
           threadParams->threadIdx,
           threadParams->threadIdx, sum);
}


int main (int argc, char *argv[])
{
   int rc, i;
   void *status;

   for(i=1; i <= NUM_THREADS; i++)
   {
       threadParams[i].threadIdx=i;
       pthread_create(&threads[i], (void *)0, counterThread, (void *)&(threadParams[i]));
   }

   for(i=0;i<NUM_THREADS;i++) {
      pthread_join(threads[i], &status);
      printf("Main: completed join with thread %ld having a status of %ld\n",i,(long)status);  
   }


   printf("TEST COMPLETE\n");
}