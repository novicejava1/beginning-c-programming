/* Example to demonstrate multicase value switch statement */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch = 0;
	printf("Enter a character between a - z : ");
	scanf("%c", &ch);

	switch (tolower(ch))
	{
		case 'a': case 'e': case 'i': case 'o': case 'u':
			printf("The character is a vowel \n");
			break;
		case 'b': case 'c': case 'd': case 'f': case 'g': case 'h': case 'j': case 'k':
		case 'l': case 'm': case 'n': case 'p': case 'q': case 'r': case 's': case 't':
		case 'v': case 'w': case 'x': case 'y': case 'z':
			printf("The character is a consonant \n");
			break;
		default:
			printf("Please enter a character between a - z \n");
			break;
	
	}

	return 0;
}
