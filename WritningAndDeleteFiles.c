#include <stdio.h>



int main()
{
   // WRITE/APPEND A FILE. to append write a insted of w .
   FILE *pF = fopen("test.txt", "w");

   fprintf(pF, "Spongebob Squarepants");

   fclose(pF);
   
   // DELETE A FILE
   /*
   if(remove("test.txt") == 0)
   {
      printf("That file was deleted successfully!");
   }
   else
   {
      printf("That file was NOT deleted!");
   }
   */
   return 0;
}