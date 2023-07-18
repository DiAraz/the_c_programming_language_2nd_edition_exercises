/* Write a program to print a histogram of 
 the lengths of words in its input.  */

#include <stdio.h>

#define MAX_WORD_LENGTH 100

int main()
{
    int c, i, length;
    int wordLength[MAX_WORD_LENGTH];
    int maxWordLength = 0; // Maximum word length encountered

    for (i = 0; i < MAX_WORD_LENGTH; ++i)
        wordLength[i] = 0;

    length = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (length > 0 && length <= MAX_WORD_LENGTH)
            {
                ++wordLength[length - 1];
                if (length > maxWordLength)
                    maxWordLength = length; // Update the maximum word length
            }
            length = 0;
        }
        else
            ++length;
    }

    printf("Word Length Histogram:\n");
    for (i = 0; i < maxWordLength; ++i)
    {
        printf("%d: ", i + 1);
        for (int j = 0; j < wordLength[i]; ++j)
            printf("*");
        printf("\n");
    }

    return 0;
}