#include <stdio.h>


int main()
{


    int* p;
    int i;
    int k;


    i=42;
    k=i;
    p=&i;
    

    // løsning er at brug *p=75;
    *p=75;


    printf("%d\n", i);
return 0;
}