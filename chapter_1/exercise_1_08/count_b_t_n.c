/* Write a program to count blanks, tabs, and newlines. */

#include <stdio.h>

int main(void)
{
  int n_blanks = 0;
  int n_tabs = 0;
  int n_newlines = 0;

  char c;
  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
    {
      ++n_blanks;
    }
    else if (c == '\t')
    {
      ++n_tabs;
    }
    else if (c == '\n')
    {
      ++n_newlines;
    }
  }

  printf("Blanks: %d\nTabs: %d\nNewlines: %d\n",
         n_blanks, n_tabs, n_newlines);

  return 0;
}
