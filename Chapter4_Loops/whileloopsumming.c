/* Example to sum numbers using while loop */
#include <stdio.h>

int main(void)
{
	unsigned long sum = 0UL;
	unsigned int i = 1;
	unsigned count = 0;

	printf("Enter the number of integers you want to sum \n");
	scanf("%u", &count);

	while(i <= count)
		sum += i++;

	printf("Total of first %u numbers is %lu\n", count, sum);

	return 0;
}
