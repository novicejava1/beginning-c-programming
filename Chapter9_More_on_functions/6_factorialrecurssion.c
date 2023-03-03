/* Example to demonstrate factorial of a number */
#include <stdio.h>

// Function prototype
unsigned long long factorial(unsigned long long);

unsigned long long factorial(unsigned long long x)
{
    if(x < 2LL)
        return x;
    
    return x * factorial(x - 1LL);
}

int main(void)
{
    unsigned long long number = 0LL;
    printf("Enter an integer value: ");
    scanf("%llu", &number);
    printf("The factorial of %llu is %llu\n", number, factorial(number));

    return 0;
}