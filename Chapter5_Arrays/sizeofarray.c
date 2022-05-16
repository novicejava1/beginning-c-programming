/* Example for size of an array */
#include <stdio.h>

int main(void)
{
	double values[5] = {1.5, 2.5, 3.5, 4.5, 5.5};
	size_t element_count = sizeof(values)/sizeof(values[0]);
	printf("The size of the array is %zu bytes", sizeof(values));
	printf(" and there are %u elements of %zu bytes each \n", element_count, sizeof(values[0]));

	return 0;
}

