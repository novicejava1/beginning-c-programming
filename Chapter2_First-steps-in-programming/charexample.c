/* Working with char types */
#include <stdio.h>

int main(void)
{
	char letter = 'A';
	char digit = '9';
	char exclamation = '!';

	char newline = '\n';
	char tab = '\t';
	char single_quote = '\'';

	printf("%c \n", letter);
	printf("%c \n", digit);
	printf("%c \n", exclamation);

	printf("Increment A by 3 : %c \n", letter + 3);
 
 	// Reading a character from keyboard
 	char yesno = 0;
 	scanf("%c", &yesno);
 	printf("The answer is : %c \n", yesno);
 	printf("The answer character is %c and code value is %d \n", yesno, yesno);
}