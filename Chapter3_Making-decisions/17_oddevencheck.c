/* Check if a number is even or odd */
#include <stdio.h>
#include <limits.h>

int main(void)
{
	long test = 0L;

	printf("Enter an integer less than %ld \n", LONG_MAX);
	scanf("%ld", &test);

	if (test % 2L == 0L)
	{
		printf("The number %ld is even \n", test);
		if ((test/2L) % 2L == 0L)
		{
			printf("Half of %ld is also even \n", test);
			printf("Interesting isn't it.. \n");
		}
	}
	else
		printf("The number %ld is odd \n", test);

	return 0;
}

