#include <stdio.h>
#include <string.h>

int main(){

    char name[25];
    int age;


    printf("\nWhat is your name?\n");
    fgets(name,25,stdin);
    name[strlen(name)-1] = '\0';

    printf("\nHow old are you?");
    scanf("%d", &age);


    printf("\nHello %s, how are you?\n",name);
    printf("\nyou are %d years old",age);
    
   

    return 0;
}