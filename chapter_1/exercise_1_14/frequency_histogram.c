/* Write a program to print a histogram
 of the frequencies of different characters in its input. */

#include <stdio.h>

int main(void)
{
    int c, i;
    int histogram[94]; // All printable characters

    for (i = 0; i < 94; ++i)
        histogram[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if (c >= ' ' && c <= '~')
            ++histogram[c - ' '];
    }

    printf("\nHistogram of all printable characters\n");
    printf("--------------------------------------\n");

    for (i = 0; i < 94; ++i)
    {
            printf("%c: ", i + ' ');
            for (int j = 0; j < histogram[i]; ++j)
                printf("*");
            printf("\n");
    }

    return (0);
}