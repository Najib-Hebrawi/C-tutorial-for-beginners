#include <stdio.h>



// arguments are what you are sending a function
// parameters are what a function expects when it is incoked


void birthday(char x[], int y)
{
    printf("\nHappy birthday dear %s!", x);
    printf("\nYou are %d years old!", y);
}

int main()
{
    char name[] = "Bro";
    int age = 21;
   
    birthday(name, age);


    return 0;
}


/*

void birthday(char name[], int age)
{
    printf("\nHappy birthday dear %s!", name);
    printf("\nYou are %d years old!", age);
}

int main()
{
    
   
    birthday("Najib", 31);


    return 0;
}
*/