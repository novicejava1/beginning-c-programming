/* Example to demonstrate arguments joining */
#include <stdio.h>
#include <string.h>
#define join(a,b) a##b

int main(void)
{
    int a1 = 2;
    int length = sizeof(join(a,1));
    printf("%d\n", length);
}