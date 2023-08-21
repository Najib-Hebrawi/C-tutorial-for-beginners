#include <stdio.h>

float factorial(int k)
{
    float f = 1;
    float i;

    for (i = 1; i <= k; i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    float k;
    printf("Enter a positive integer: ");
    scanf("%f", &k);
    float fk = factorial(k);
    printf("The value of %f factorial is %f\n\n", k, fk);
}