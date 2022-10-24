#include <stdio.h>

int main(){

    char name[128];
    int age;


    printf("\nWhat is your name?\n");
    scanf("%s", &name);

    printf("\nHow old are you?");
    scanf("%d", &age);


    printf("\nHello %s, how are you?\n",name);
    printf("\nyou are %d years old",age);
    
   

    return 0;
}