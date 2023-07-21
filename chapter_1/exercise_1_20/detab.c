/* Write a program detab that replaces tabs in the input
 with the proper number of blanks to space to the next tab stop. */
 
#include <stdio.h>

#define TABSTOP 8 // We decided to put 8 spaces per tab

int main(void)
{
  int c;
  unsigned int spaces; // Ensure spaces will not go in negative numbers

  while ((c = getchar()) != EOF)
  {
    if (c == '\t')
    {
      spaces = TABSTOP;

      while (spaces)
      {
        putchar(' ');
        --spaces;
      }
    }
    else
    {
      putchar(c);
    }
  }

  return 0;
}