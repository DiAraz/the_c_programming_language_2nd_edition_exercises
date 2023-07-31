/* Write a function any(s1,s2), which returns the first location in the string s1 
where any character from s2 occurs, or -1 if s1 contains no characters from s2. */

#include <stdio.h>

int any(char str1[], char str2[]);

int main(void)
{
    char s1[] = "Hello World";
    char s2[] = "orle";

    printf("%d", any(s1, s2));

    return (0);

}

int any(char str1[], char str2[])
{
  int i, j;
  for (i = 0; str1[i] != '\0'; ++i)
  {
    for (j = 0; str2[j] != '\0'; ++j)
    {
      if (str1[i] == str2[j])
      {
        return i;
      }
    }
  }

  return -1;
}