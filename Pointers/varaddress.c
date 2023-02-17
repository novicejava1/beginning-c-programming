/* Print Address and Value of Variable */
#include <stdio.h>

int main(void)
{
    int i = 3;
    printf("Address of i is %u \n", &i);
    printf("Value of i is %d \n", i);

    printf("Value at address is %d \n", *(&i));

    return 0;

}