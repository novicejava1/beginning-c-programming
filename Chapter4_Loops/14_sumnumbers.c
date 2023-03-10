/* Example to sum the numbers */
#include <stdio.h>

int main(void)
{
	unsigned long long sum = 0LL;
	unsigned int count = 0;

	printf("Enter the number of integers to sum : ");
	scanf("%u", &count);

	for(int i = 0; i <= count; ++i)
	{
		sum += i;
	}

	printf("The sum of all the numbers is : %llu \n", sum);
}
