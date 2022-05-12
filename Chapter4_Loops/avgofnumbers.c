/* Example for average of arbitrary numbers */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char answer = 'N';
	double total = 0.0;
	double value = 0.0;
	unsigned int count = 0;

	printf("This program calculates the avg of any number of values \n");

	for(;;)
	{

		printf("Enter double value : ");
		scanf("%lf", &value);
		//printf("%lf", value);

		total += value;
		++count;

		printf("Do you want to enter another value (y/n) : ");
		scanf(" %c",&answer);

		if(tolower(answer) == 'n')
			break;
	}

	printf("The avg is : %.2lf\n", total/count);
	return 0;
}
