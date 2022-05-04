/* Display bytes occupied by each type */
#include <stdio.h>

int main(void)
{
	printf("Char occupies : %u \n", sizeof(char));
	printf("Short occupies : %u \n", sizeof(short));
	printf("Int occupies : %u \n", sizeof(int));
	printf("Long occupies : %u \n", sizeof(long));
	printf("Long Long occupies : %u \n", sizeof(long long));
	printf("Float occupies : %u \n", sizeof(float));
	printf("Double occupies : %u \n", sizeof(double));
	printf("Long Double occupies : %u \n", sizeof(long double));
}