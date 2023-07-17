/* Write a program to copy its input to its output,
 replacing each string of one or more blanks by a single blank. */

#include <stdio.h>

int main(void)
{
    int c;
    int prev_char;

    prev_char = ' ';
    while ((c = getchar()) != EOF)
    {
        if (c != ' ' || prev_char != ' ')
            putchar(c);
        prev_char = c;
    }

    return (0);
}