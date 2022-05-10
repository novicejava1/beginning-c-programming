/* Example lottery winner using switch statement */
#include <stdio.h>

int main(void)
{
	int ticket_number = 0;

	printf("Enter the ticket number : \n");
	scanf("%d", &ticket_number);

	switch (ticket_number)
	{
		case 35:
			printf("Congratulations!! You won the first prize ! \n");
			break;
		case 122:
			printf("You are in luck - second prize \n");
			break;
		case 78:
			printf("You are in luck - third prize \n");
			break;
		default:
			printf("Better luck next time.. \n");
			break;
	}

	return 0;
}

