/* Example to demonstrate a calculator */
#include <stdio.h>

int main(void)
{
	double number1 = 0.0;
	double number2 = 0.0;
	char operator = 0;

	printf("Enter the calculation : \n");
	scanf("%lf %c %lf", &number1, &operator, &number2);

	switch (operator)
	{
		case '+':
			// code for addition
			printf("= %lf \n", number1 + number2);
			break;
		case '-':
			// code for substraction
			printf("= %lf \n", number1 - number2);
			break;
		case '*':
			// code for multiplication
			printf("= %lf \n", number1 * number2);
			break;
		case '/':
			if (number2 == 0)
				printf("Division by 0 error!! \n");
			else
				//code for division
				printf("= %lf \n", number1 / number2);
			break;
		case '%':
			if ((long)number2 == 0)
				printf("Division by 0 error!! \n");
			else
				// code for remainder
				printf("= %lf \n", (long)number1 % (long)number2);
			break;
		default:
			printf("Illegal Operation \n");
			break;

	}

	return 0;

}
