#include <stdio.h>
#include <string.h>





struct Players
{
    char name[14];
    int score;
};

int main()
{

    struct Players player1;
    struct Players player2;

    strcpy(player1.name, "Najib");
    player1.score = 2;

    strcpy(player2.name, "Tarek");
    player2.score = 5;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

    printf("%s\n", player2.name);
    printf("%d\n", player2.score);

    return 0;
}