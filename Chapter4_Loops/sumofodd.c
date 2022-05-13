/* Example sum of odd numbers */
#include <stdio.h>

int main(void)
{
	long sum = 0L;

	for(int i = 1; i < 20; i += 2)
		sum += i;
	
	printf("Sum of odd number below 20 is : %ld \n", sum);

	return 0;
}
