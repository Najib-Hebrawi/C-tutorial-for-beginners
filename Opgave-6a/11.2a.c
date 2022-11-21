#include <stdio.h>

void sort(int temperature[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (temperature[j] > temperature[j + 1])
            {
                int temprarySpace = temperature[j];
                temperature[j] = temperature[j + 1];
                temperature[j + 1] = temprarySpace;
            }
        }
    }
}




void printTemperature(int temperature[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", temperature[i]);
        
    }
}




int main()
{
    int temperature[] = {18, 16, 14, 13, 14, 17, 17};
    int size = sizeof(temperature) / sizeof(temperature[0]);

    sort(temperature, size);
    printTemperature(temperature, size);

    return 0;
}
