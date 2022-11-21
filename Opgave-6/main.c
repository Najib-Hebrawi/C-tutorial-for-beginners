#include <stdio.h>
#include "library.h"


int main()
{  
    int k;
    printf("Enter a positive integer: ");
    scanf("%d", &k);
    int fk = factorial(k);  
    printf("The value of %d factorial is %d\n\n", k, fk);
}