/* Example on Pointer to Functions */
#include <stdio.h>

// Function prototypes
int sum(int, int);
int product(int, int);
int difference(int, int);

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

int main(void)
{
    int a = 10;
    int b = 5;
    int result = 0;
    int (*pfun) (int, int);         // Function pointer declaration

    pfun = sum;                     // Point pfun to sum function
    result = pfun(a, b);
    printf("Sum of two variable using pointer function : %d\n", result);

    pfun = product;                 // Point pfun to product function
    result = pfun(a, b);
    printf("Product of two variable using pointer function : %d\n", result);

    pfun = difference;                 // Point pfun to difference function
    result = pfun(a, b);
    printf("Difference of two variable using pointer function : %d\n", result);    

    return 0;
}