#include <stdio.h>


// return = returens a value back to a calling function


double square(double x)
{
   double result = x * x;
   return result;
}

int main()
{
   double x = square(3);
   printf("%lf", x);

   return 0;
}

/*

double square(double x)
{
  
   return x * x ;
}

int main()
{
   double x = square(3);
   printf("%lf", x);

   return 0;
}
*/