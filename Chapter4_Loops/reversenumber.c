/* Example to reverse a number using do while */
#include <stdio.h>

int main(void)
{
	unsigned int number = 0;
	unsigned int reverse = 0;
	unsigned int temp = 0;

	printf("Enter the number to reverse :");
	scanf("%u", &number);

	temp = number;
	do
	{
		reverse = 10*reverse + temp%10;
		temp = temp/10;
	} while(temp);

	printf("The reversed number is %u\n", reverse);
	return 0;

}
