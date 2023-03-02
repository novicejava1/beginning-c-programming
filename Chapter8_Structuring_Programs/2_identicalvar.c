/* Example to demonstrate the usage of same variable names */
#include <stdio.h>

int main(void)
{
    int count = 0;
    do
    {
        int count = 0;
        ++count;
        printf("count = %d\n", count);

    } while (++count < 5);
    
    printf("count = %d\n", count);

    return 0;
}