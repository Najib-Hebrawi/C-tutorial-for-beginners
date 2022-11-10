#include <stdio.h>
#include <stdlib.h>





int main(){

int i;
printf("main %p %d\n", &i, __builtin_frame_address(0));



    return 0;
}