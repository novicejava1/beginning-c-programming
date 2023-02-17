#include <stdio.h>

int main(void)
{
    int i = 3;
    int *j;

    j = &i;

    printf("Address of i is %u \n", &i);
    printf("Address of i is %u \n", j);

    printf("Value of i is %d \n", i);
    printf("Value of i is %d \n", *j);

    return 0;
}