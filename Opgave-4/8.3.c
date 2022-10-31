#include <stdio.h>

void foo1(int xval)
{
    int x;
    x = xval;

    /* print the address and value of x here */
    printf("address of x: %p\n", &x);
    printf("value of x: %d\n", xval);
}

void foo2(int dummy)
{
    int y;
    /* print the address and value of y here */
    printf("address of y: %d\n", y);
    printf("value of y: %d\n", dummy);
}

int main()

{
    foo1(7);
    foo2(11);
    return 0;
}