/* Improved version of upper to lower case converter */
#include <stdio.h>

int main(void)
{
	char letter = 0;
	
	printf("Enter a uppercase letter : ");
	scanf("%c", &letter);

	if ((letter >= 'A') && (letter <= 'Z'))
	{
		letter = letter + 32;
		printf("Lowercase letter is : %c \n", letter);
	}
	else
	{
		printf("Please enter a uppercase letter for conversion \n");
	}

	return 0;

	
}
