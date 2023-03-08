/* Example to demonstrate logical macro */
#include <stdio.h>
#include <math.h>
#define PI 3.14
#define CPU i10

#if defined PI                              // Same as #ifdef
    double radius = 10;
#endif

#if !defined GRAVITY                        // Same as #ifndef
    #define GRAVITY 9.8
#endif

#if CPU == i10                              // Testing a constatn def
    char str[50] = "Allocated with a good CPU";
#endif

int main(void)
{
    double area = 0.0;
    area = PI * pow(radius, 2);
    printf("Area of circle : %f\n", area);
    printf("Gravity : %f\n", GRAVITY);
    printf("CPU : %s\n", str);

    return 0;
}
