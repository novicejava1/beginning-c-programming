/* Get the statistics of characters, words and digits in a string */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char str[] = "1. Imagination is more important than knowledge."
                 "2. Never let down";
    
    unsigned int i = 0;
    unsigned int letters = 0;
    unsigned int digits = 0;
    unsigned int punct = 0;
    unsigned int length = strlen(str);
    
    printf("%d\n", length);

    while (i <= length)
    {
        if (isalpha(str[i]))
        {
            ++letters;
        }
        else if (isdigit(str[i]))
        {
            ++digits;
        }
        else if (ispunct(str[i]))
        {
            ++punct;
        }
        
        ++i;
        
    }
    
    printf("%d, %d, %d", letters, digits, punct);
}