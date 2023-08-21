#include <stdio.h>


int main()
{


    int*p;
    int i;
    int k;


    i=42;
   // k=i;
    p=&i;
      



    /*

Which of the following statements will change the value of i to 75?
 A. k = 75;
B. *k = 75;
C. p = 75;
D. *p = 75;
E. Two or more of the answers will change i to 75*/

    // løsning er at brug *p=75;
    
    *p=75;


    printf("%d\n", i);
return 0;
}



/*

int x = 4;
int *pX = &x; // integer pointer named pX is set to the address of x.
int y = *pX; // integer named y is set to the thing pointed to by pX
printf("%d\n", y);

*/