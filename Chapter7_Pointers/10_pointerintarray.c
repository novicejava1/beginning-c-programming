/* Example int array with pointers */
#include <stdio.h>
#include <string.h>

int main(void)
{
    long num[] = {15L, 25L, 35L, 45L};
    long *p = &num;

    for(int i = 0; i < sizeof(num)/sizeof(num[0]); ++i)
    {
        printf("address p+%d (&num[%d]): %llu *(p+%d) value: %d\n",i, i, (unsigned long long)(p+i), i, *(p+i));
    }
}