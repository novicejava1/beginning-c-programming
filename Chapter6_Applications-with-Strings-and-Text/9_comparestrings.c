/* Compare two strings using standard library functions */
#include <stdio.h>

int main(void)
{
    char str1[] = "The quick brown fox";
    char str2[] = "The quick black fox";

    if(strcmp(str1, str2) > 0)
    {
        printf("str1 is greater than str2.\n");
    }

    if(strncmp(str1, str2, 10) <= 0)
        printf("\n%s\n%s\n", str1, str2);
    else
        printf("\n%s\n%s\n", str2, str1);
}