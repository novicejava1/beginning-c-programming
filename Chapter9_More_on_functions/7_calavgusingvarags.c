/* Example to calculate avg using variable arguments */
#include <stdio.h>
#include <stdarg.h>

// Function prototype using var args
double average(double v1, double v2,...);

double average(double v1, double v2,...)
{
    va_list parg;                      // pointer for var args list
    double sum = v1 + v2;              // sum of  fixed arguments values
    double value = 0.0;                // total argument value initialized to 0
    int count = 2;                     // count of number of fixed arguments

    va_start(parg, v2);                // initialize argument pointers
    while ((value = va_arg(parg, double)) != 0.0)
    {
        sum += value;
        ++count;
    }
    va_end(parg);                      // end var args process

    return sum/count;

}

int main(void)
{
    double v1 = 10.5, v2 = 2.5;
    int num1 = 6, num2 = 5;
    long num3 = 12L, num4 = 20L;

    printf("Average : %.2lf\n", average(v1, 3.5, v2, 4.5, 0.0));
    printf("Average : %.2lf\n", average(1.0, 2.0, 0.0));
    printf("Average : %.2lf\n", average((double)num2, v2, (double)num1, (double)num4, (double)num3, 0.0));

    return 0;
}
