#include <stdio.h>
int main()
{

    int number[] = {23, 33, 32, 25};
    float avg, sum = 0;
    int length = sizeof(number) / sizeof(number[0]);
    for (int i = 0; i < length; i++)
    {

        sum = sum + number[i];
    }
    avg = sum / length;

    printf("%f", avg);
}