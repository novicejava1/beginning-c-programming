/* Example to demonstrate nested logical definition */
#include <stdio.h>

#define US 0
#define UK 1
#define France 2
#define Germany 3
#define Country Germany

#if Country == US || Country == UK
    #define Greeting "Hello."
#elif Country == France
    #define Greeting "Bonjour."
#elif Country == Germany
    #define Greeting "Guten Tag."
#endif

int main(void)
{
    printf("%s\n", Greeting );
}