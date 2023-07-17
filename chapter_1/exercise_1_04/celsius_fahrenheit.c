/* print Celsius-Fahrenheit table
    for celsius = 0, 20, ..., 300 */

#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Celsius to Fahrenheit table\n");
    celsius = lower;
    while (celsius <= upper)
    {
        fahr = (celsius * 9.0 / 5.0) + 32.0;
        printf("%3.0f\t\t%4.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return (0);
}