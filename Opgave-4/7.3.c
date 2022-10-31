#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    const int MIN = 1;
    const int MAX = 100;

    int guesses;
    int number;
    int randomNumber;

    printf("\nEnter a Number between 1 and 100:");
    scanf("%d", &number);

    // uses the current time as a seed
    srand(time(0));
    // generate a random number between MIN & MAX
    randomNumber = (rand() % MAX) + MIN;

    do
    {

        if (number > randomNumber)
        {
            printf("Too high!\n");
        }
        else if (number < randomNumber)
        {
            printf("Too low!\n");
        }
        else
        {
            printf("CORRECT!\n");
        }
        randomNumber = (rand() % MAX) + MIN;

        guesses++;
    } while (number != randomNumber);

    printf("----------------------------\n");
    printf("answer: %d\n", randomNumber);
    printf("guesses: %.2d\n", guesses);
    printf("----------------------------");

    return 0;
}