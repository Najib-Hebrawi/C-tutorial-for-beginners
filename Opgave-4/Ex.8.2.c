#include <stdio.h>


int main()
{
printf("Swap two integers\n");
int x = 1;
int y = 2;
printf("x=%d y=%d\n", x, y);
/* call swap */
int temp;
temp = x;
 x = y;
 y = temp;

printf("x=%d y=%d\n", x, y);

return 0;
}