#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int randomNumber;

    // uses the current time as a seed
    srand(time(0));

    // generate a random number between MIN & MAX
    randomNumber = (rand() % MAX) + MIN;

    do
    {
        printf("Enter a guess of  number between 1 and 100: ");
        scanf("%d", &guess);
        if (guess > randomNumber)
        {
            printf("Too high!\n");
        }
        else if (guess < randomNumber)
        {
            printf("Too low!\n");
        }
        else
        {
            printf("CORRECT!\n");
        }
        guesses++;
    } while (guess != randomNumber);

    printf("----------------------------\n");
    printf("answer: %d\n", randomNumber);
    printf("guesses: %d\n", guesses);
    printf("----------------------------");

    return 0;
}