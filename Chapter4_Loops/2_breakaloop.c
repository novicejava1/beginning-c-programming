/* Example to demonstrate loop break */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char answer = 0;
	for(;;)
	{
		printf("Do you want to enter some more (y/n) : ");
		scanf(" %c", &answer);
		printf("%d", answer);
		if(tolower(answer) == 'n')
			break;
	}
}
