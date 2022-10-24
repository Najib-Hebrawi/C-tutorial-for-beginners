#include <stdio.h>    
     



int main()    
{    
    //Initialize array     
    int array[] = {1, 2, 3, 4, 5};     
    //Calculate length of array    
    int length = sizeof(array)/sizeof(array[0]);    
        
    printf("Elements of given array: \n");    
    //Loop through the array by incrementing value of i     
    for (int i = 0; i < length; i++) {     
        printf("%d ", array[i]);     
    }      
     
    return 0;    
}      