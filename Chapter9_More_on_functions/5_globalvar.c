/* Example to demonstrate global and local variables */
#include <stdio.h>

// Global variable
int count = 0;

// Function prototypes
void test1(void);
void test2(void);

void test1(void)
{
    printf("test1 count = %d\n", ++count);
}

void test2(void)
{
    static int count = 0;       // This hides the global count
    printf("test2 count = %d\n", ++count);
}

int main(void)
{
    for(int count = 0; count < 5; ++count)
    {
        test1();
        test2();
    }

    return 0;
}