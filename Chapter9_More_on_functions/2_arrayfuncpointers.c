/* Example to demonstrate an array of pointer functions */
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
    int a = 5;
    int b = 10;
    int result = 0;
    int (*pfun[3]) (int, int);          // Declaring a array of pointers to functions

    //int (*pfun[3]) (int, int) = {sum, product, difference};          //  Declar and initialize the array of pointer to functions
    pfun[0] = sum;
    pfun[1] = product;
    pfun[2] = difference;



    for(int i = 0; i < 3; ++i)
    {
        result = pfun[i](a, b);
        printf("result : %d\n", result);
    }

    // Calling all three functions
    result = pfun[1](pfun[0](a, b), pfun[2](a, b));
    printf("The product of the sum and the difference = %2d\n", result);

    return 0;
}