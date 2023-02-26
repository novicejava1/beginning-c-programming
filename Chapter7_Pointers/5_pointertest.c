/* Example to validate pointer test */
#include <stdio.h>

int main(void)
{
    int *pvalue = NULL;

    if (pvalue != 0)
    {
        printf("Pointer is referencing to an address\n");
    }
    else
    {
        printf("Pointer is not referencing to any address\n");
    }

    return 0;

}
