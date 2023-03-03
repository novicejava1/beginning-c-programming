/* Example to demonstrate pointer of functions as argument to function */
#include <stdio.h>

// Function prototypes
int sum(int, int);
int product(int, int);
int difference(int, int);
int any_function(int (*pfun) (int,int), int x, int y);


int sum(int x, int y)
{
    return x + y;
}

int product(int x, int y)
{
    return x * y;
}

int difference(int x, int y)
{
    return x - y;
}

int any_function(int (*pf) (int, int), int x, int y)
{
    return pf(x, y);
}

int main(void)
{

    int a = 10;
    int b = 5;
    int result = 0;
    int (*pf) (int, int) = sum;

    result = any_function(pf, a, b);       // passing a pointer to a function
    printf("Sum of two variable is : %d\n", result);

    result = any_function(product, a, b);   // passing the address of a function
    printf("Product of two variable is : %d\n", result);

    result = any_function(difference, a, b);   // passing the address of a function
    printf("Difference of two variable is : %d\n", result);


    return 0;
}