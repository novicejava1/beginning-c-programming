/* Example to increment pointer array */
#include <stdio.h>
#include <string.h>

int main()
{
    char multiple[20] = "my string";
    char *p = &multiple;

    printf("multiple string length is : %d\n", strlen(multiple));

    for(int i = 0; i < strlen(multiple); i++)
    {
        printf("multiple[%d] = %c *(p+%d) = %c &multiple[%d] = %p p+%d = %p\n", i, multiple[i], i, *(p+i), i, &multiple[i], i, p+i);

    }
}