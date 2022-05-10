/* Convert character from upper to lower */
#include <stdio.h>

int main(void)
{
	char mychar = 0;
	char lower_mychar = 0;
	printf("Enter a character to convert to lower case : ");
	scanf("%c", &mychar);
	
	if ( mychar >= 'A')
		if (mychar <= 'Z')
		{
			lower_mychar = mychar + 32;
			printf("Lower case of mychar is %c \n", lower_mychar);
		}
		else
			printf("I need a uppercase letter.. \n");

	return 0;

}

