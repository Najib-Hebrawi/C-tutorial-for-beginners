#include <pthread.h>
#include <unistd.h>
#include <stdio.h>

void *myTurn(void *arg)
{

   for (int i = 0; i < 8; i++)
   
    {
        sleep(1);
        printf("My tur\n");
    }
    return NULL;
}

void *yourTurn(void *arg)
{
   for (int i = 0; i < 2; i++)
    {
        sleep(1);
        printf("Your turn\n");
    }
    return NULL;
}

int main()
{
    pthread_t myThread;
    pthread_create(&myThread, NULL, myTurn, NULL);
    yourTurn();
    pthread_join(&myThread, NULL);
}