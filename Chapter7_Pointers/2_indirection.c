/* Example pointer */
#include <stdio.h>

int main(void)
{
    int i = 3;
    int *j = NULL;
    int result = 0;

    j = &i;

    printf("Address of i is %p \n", &i);
    printf("Address of i is %p \n", j);

    printf("Value of i is %d \n", i);
    printf("Value of i is %d \n", *j);

    printf("Address of pointer *j : %p\n", (void*)&j);
    printf("Size of pointer : %zd bytes\n", sizeof(j));

    result = *j + 5;
    printf("Result of adding 5 to pointer *j : %d\n", result);

    return 0;
}