/* Compare and make decision */
#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter the number below 10 : \n");
    scanf("%d", &num);

    if (num < 10)
    {
        printf("It a true condition");
    }

    return 0;
}