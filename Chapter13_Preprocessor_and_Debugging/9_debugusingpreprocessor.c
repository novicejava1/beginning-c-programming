/* Example to debug source code using preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// macro to generate a random number between 0 to numvalues
#define random(NumValues) ((int)(((double)(rand())*(NumValues))/(RAND_MAX+1.0)))

#define iterations 6
#define test                    // select testing output
#define testf                   // select function call trace
#define repeatable              // select repeatable execution

// Function prototypes
int sum(int, int);
int product(int, int);
int difference(int, int);

int sum(int x, int y)
{
    #ifdef testf
        printf("Function sum called args %d and %d.\n", x, y);
    #endif

    return x + y;
}

int product(int x, int y)
{
    #ifdef testf
        printf("Function product called args %d and %d.\n", x, y);
    #endif

    return x * y;
}

int difference(int x, int y)
{
    #ifdef testf
        printf("Function difference called args %d and %d.\n", x, y);
    #endif
    
    return x - y;
}



int main(void)
{
    int funsel = 0;             // index for function selection
    int a = 10, b = 5;          // initializing var
    int result = 0;             // initializing result

    // pointer to array of function
    int (*pfun[])(int, int) = {sum, product, difference};

    #ifdef repeatable           // Conditional code for repeatable execution
        srand(1);
    #else
        srand((unsigned int)time(NULL)) // Seed random number generation
    #endif

    // Execute random function selections
    int element_count = sizeof(pfun)/sizeof(pfun[0]);
    for(int i = 0 ; i < iterations ; ++i)
    {
        funsel = random(element_count);
        if( funsel > element_count - 1 )
        {
            printf("Invalid array index = %d\n", funsel);
            exit(1);
        }
    
    #ifdef test
        printf("Random index = %d\n", funsel);
    #endif
    result = pfun[funsel](a , b);
    printf("result = %d\n", result );
    }

    return 0;
}