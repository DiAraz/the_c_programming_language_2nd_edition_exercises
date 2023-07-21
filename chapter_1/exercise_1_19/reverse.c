/* Write a function reverse(s) that reverses the character string s.
 Use it to write a program that reverses its input a line at a time. */

#include <stdio.h>

#define MAXLINE 1000

void reverse(char s[]);
int get_line(char line[], int maxline);
int string_length(char s[]);

int main(void)
{
    int len;
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0)
    {
        reverse(line);
        printf("%s", line);
    }
    return 0;
}

void reverse(char s[])
{
    int i, j;
    char temp;

    // Find the length of the string using the string_length function
    int length = string_length(s);

    // Reverse the string (swap function)
    for (i = 0, j = length - 1; i < j; ++i, --j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int get_line(char line[], int maxline)
{
    int c, i;

    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        line[i] = c;
    }

    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';

    return i;
}

int string_length(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; ++i)
        ;
    return i;
}
