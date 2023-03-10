/* Compare numbers */
#include <stdio.h>

int main(void)
{
	int number = 0;
	printf("Enter an integer between 1 and 10: ");
	scanf("%d", &number);

	if (number > 5)
		printf("Number is greater than 5 \n");
	if (number < 6)
		printf("Number is less than 6 \n");

	return 0;
}
