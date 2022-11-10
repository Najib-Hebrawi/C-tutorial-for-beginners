#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int rollDice()
{
    int n = rand() % 6 + 1; // Generate random number in [1,6]
    return n;
}
int main()
{
    srand(time(0)); // Intialize random number generator
    int dice = rollDice();
    switch (dice)
    {
    case 1:
        printf("Breakfast\n");
        break;
    case 2:
        printf("Study\n");
        break;
    case 3:
        printf("Swim\n");
        break;
    case 4:
        printf("Go fishing\n");
        break;
    case 5:
        printf("Call mom\n");
        break;
    case 6:
        printf("Back to bed\n");
        break;
    }

    return 0;
}
