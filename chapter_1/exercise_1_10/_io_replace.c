/* Write a program to copy its input to its output,
replacing each tab by \t, each backspace by \b,
and each backlash by \\. */

#include <stdio.h>

int main(void)
{
  char c;
  while ((c = getchar()) != EOF)
  {
    if (c == '\t')
    {
      putchar('\\');
      putchar('t');
    }
    else if (c == '\b')
    {
      putchar('\\');
      putchar('b');
    }
    else if (c == '\\')
    {
      putchar('\\');
      putchar('\\');
    }
    else
    {
      putchar(c);
    }
  }

  return 0;
}
