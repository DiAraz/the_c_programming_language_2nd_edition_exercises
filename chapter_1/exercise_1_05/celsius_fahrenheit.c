/* print Celsius-Fahrenheit table
        in reverse order */

#include <stdio.h>
#define UPPER 300
#define LOWER 0
#define STEP 30

int main()
{
    int fahr;

    printf("Fahrenheit to Celsius reverse table:\n");
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%3d\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));

    return (0);
}