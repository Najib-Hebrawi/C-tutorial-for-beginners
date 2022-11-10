#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
int rollDice() {
int n = rand() % 6 + 1; // Generate random number in [1,6]
return n;
}
int main() {
srand(time(0)); // Intialize random number generator
char action[12];
int dice = rollDice();
if (dice == 1) {
strcpy(action, "Breakfast");
}
if (dice == 2) {
strcpy(action, "Study");
}
if (dice == 3) {
strcpy(action, "Swim");
}
if (dice == 4) {
strcpy(action, "Go fishing");
}
if (dice == 5) {
strcpy(action, "Call mom");
}
if (dice == 6) {
strcpy(action, "Back to bed");
}
printf("%s\n", action);
return 0;
}
