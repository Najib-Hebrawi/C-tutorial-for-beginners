#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int binarySearch(int numbers[], int l, int r, int number)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        // Check if x is present at mid
        if (numbers[m] == number)
            return m;
 
        // If x greater, ignore left half
        if (numbers[m] < number)
            l = m + 1;
 
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
 
    // if we reach here, then element was
    // not present
    return -1;
}







int main()
{
int number;

int numbers[100];
    int n = sizeof(numbers) / sizeof(numbers[0]);


    printf("\nEnter a Number between 1 and 100:");
    scanf("%d", &number);

int result = binarySearch(numbers, 0, n - 1, number);
    (result == -1) ? printf("Element is not present"
                            " in array")
                   : printf("Element is present at "
                            "index %d",
                            result);
    return 0;

}