/* Math function example */
#include <stdio.h>
#include <math.h>


// Compile and Link using "gcc mathfunctions.c -o mathfunctions -lm"

int main(void)
{
	double x = 2.25;
	double less = 0.0;
	double more = 0.0;
	double root = 0.0;

	less = floor(x);
	more = ceil(x);
	root = sqrt(x);

	printf("floor of %f is %f \n", x, less);
}
