#include <stdio.h>

int factorial(int n)
{
    int f = 1;
    int i;

    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    int k;
    printf("Enter a positive integer: ");
    scanf("%d", &k);
    int fk = factorial(k);
    printf("The value of %d factorial is %d\n\n", k, fk);
}