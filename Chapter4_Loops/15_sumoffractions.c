/* Example sum of fraction numbers */
#include <stdio.h>

int main(void)
{
	double sum = 0.0;

	for(double x = 1.0; x < 11; x += 1.0)
		sum += 1.0/x;

	printf("Sum of fractions : %.2lf \n", sum);
	return 0;
}
