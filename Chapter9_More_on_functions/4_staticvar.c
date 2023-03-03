/* Example demonstrating static vs automatic variables */
#include <stdio.h>

// Function prototypes
void test1(void);
void test2(void);

void test1(void)
{
    int count = 0;
    printf("test1 count = %d\n", ++count );
}

void test2(void)
{
    static int count = 0;
    printf("test2 count = %d\n", ++count );
}

int main()
{
    for(int i = 0; i < 5; ++i)
    {
        test1();
        test2();
    }

    return 0;
}

