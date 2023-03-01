/* Example Pointer to a constant */
#include <stdio.h>

int main(void)
{
    long value = 9999L;
    const long *pvalue = &value;
    long number = 8888L;
    pvalue = &number;
    printf("Value at *pvalue : %ld", *pvalue);

    return 0;


}