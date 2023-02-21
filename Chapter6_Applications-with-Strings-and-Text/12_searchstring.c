/* Search a substring in a string */
#include <stdio.h>

int main(void)
{
    char text[] = "Every dog has his day";
    char word[] = "dog";
    char *pFound = NULL;

    pFound = strstr(text, word);
    printf("%c\n", *pFound);
}