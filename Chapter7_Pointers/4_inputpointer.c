/* Input value into pointer */
#include <stdio.h>

int main(void)
{
    int value = 0;
    int *pvalue = &value;

    printf("Value of *pvalue before input is : %d\n", *pvalue);
    printf("Input value into pointer *pvalue: ");
    scanf("%d", pvalue);
    printf("Value of *pvalue after input is : %d\n", *pvalue);

    return 0;
}