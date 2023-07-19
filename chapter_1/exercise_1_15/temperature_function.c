/* Rewrite the temperature conversion program
    to use a function for conversion. */

#include <stdio.h>

float celsius_to_fahrenheit(float celsius);

int main(void)
{
    float celsius;
    int top, step;

    top = 300;
    step = 20;

    printf("Celsius to Fahrenheit table\n");

    for(celsius = 0; celsius <= top; celsius = celsius + step)
        printf("%3.0f\t\t%4.0f\n", celsius, celsius_to_fahrenheit(celsius));
    
    return (0);
}

float celsius_to_fahrenheit(float celsius)
{
    float fahr = (celsius * 9.0 / 5.0) + 32.0;

    return (fahr);
}
