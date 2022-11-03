#include <stdio.h>

void reset1(int x)
{
    x = 0;
}

void reset2(int *p)
{
    *p = 0;
}

int main()
{

    int a;
    a = 5;

    printf("a=%d\n", a);
    // reset1(a);
    reset2(&a);
    printf("a=%d\n", a);

    return 0;
}