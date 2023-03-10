/* Example to demonstrate yes or no response */
#include <stdio.h>

int main(void)
{
	char answer = 0;
	printf("Enter the response : ");
	scanf("%c", &answer);

	switch (answer)
	{
		case 'Y': case 'y':
			printf("The response is yes \n");
			break;
		case 'N': case 'n':
			printf("The response is no \n");
			break;
		default:
			printf("Please enter the correct response \n");
			break;
	}

	return 0;
}
