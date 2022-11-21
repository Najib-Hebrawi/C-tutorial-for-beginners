#include <stdio.h>

int main()
{

    int temperature[] = {18, 16, 14, 13, 14, 17, 17};
    double sum = 0;
    double mean = 0;
    int size = sizeof(temperature) / sizeof(temperature[0]);

    for (int i = 0; i < size; i++)
    {
        sum = sum + temperature[i];
    }

    printf("Sum af temperaturer er = %f\n", sum);

    mean = sum / 2;

    printf(" Mean  er = %f\n", mean);

    printf("----------------------------------------------------------------\n");

    // sortere array først så kan vi finde median.
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

    double median;

    /* calculation median */
    if (size % 2 == 0)
        median = (temperature[(size / 2) - 1] + temperature[(size / 2)]) / 2.0;
    else
        median = temperature[(size / 2)];

    /*printing result */

    for (int i = 0; i < size; i++)
    {
        printf(" temperature som er sorteret:  %d\t", temperature[i]);
    }

    printf("\nMedian er %f\n", median);

    return 0;
}