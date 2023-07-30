/* Write a function htoi(s), which converts a string 
of hexadecimal digits into its equivalent integer value. */

#include <stdio.h>
#include <ctype.h>

int htoi(char hex[]);

int main(void)
{
    char hex[] = "0x4F";

    int number = htoi(hex);
    
    printf("Hexadecimal: %s Decimal: %d\n", hex, number);

    return (0);
}

int htoi(char hex[])
{
    int result = 0;

    int i, digit_value;

    i = 0;
    while (hex[i] != '\0')
    {
        if (hex[i] == '0' && (hex[i + 1] == 'x' || hex[i + 1] == 'X'))
            i = 2;
        
        digit_value = tolower(hex[i]);
        if (isdigit(digit_value))
            digit_value -= '0';

        if (isalpha(digit_value) && digit_value <= 'f')
            digit_value = digit_value - 'a' + 10;
        
        if ((hex[i] >= '0' && hex[i] <= '9') || (hex[i] >= 'a' && hex[i] <= 'f') || (hex[i] >= 'A' && hex[i] <= 'F'))
            result = result * 16 + digit_value;
        else
            printf("Error: Not a valid hex value.\n Try this format: 0xHHHH, where H is a hex digit.\n");


        i++;
    }

    return (result);    
}