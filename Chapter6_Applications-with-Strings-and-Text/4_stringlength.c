/* Identify the string length */
#include <stdio.h>

int main(void)
{
    char str1[] = "C a language of simplicity";
    char str2[] = "Python a versatile language. But still??";
    //char str2[] = "Python";

    unsigned int count = 0;

    while (str1[count] != '\0')
        ++count;

    printf("The length of \"%s\" string is : %d\n", str1, count);

    count = 0;
    while (str2[count] != '\0')
    {    
        //printf("%d\n", count);
        ++count;
    }
    printf("The length of \"%s\" string is : %d\n", str2, count);

    return 0;
}