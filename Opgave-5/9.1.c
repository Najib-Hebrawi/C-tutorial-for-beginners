#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    srand(time(0)); // Intialize random number generator
    int n;
    for (int i = 0; i < 10; i++)
    {
        n = rand() % 6 + 1; // Generate random number in [1,6]

        
    }
}
