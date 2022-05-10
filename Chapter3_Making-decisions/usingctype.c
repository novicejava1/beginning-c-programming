/* Using ctype header for character conversion */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char letter = 0;
	printf("Enter an uppercase letter : ");
	scanf("%c", &letter);

	if (isalpha(letter) && isupper(letter))
		printf("Lower case letter is : %c \n", tolower(letter));
	else
		printf("Please enter an uppercase letter");

	return 0;
}
