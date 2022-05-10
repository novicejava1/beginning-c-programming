/* Example to identify vowel and consonants improved */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch = 0;
	printf("Enter the character between a - z : ");
	scanf("%c", &ch);

	if(!isalpha(ch))
		printf("Please enter a character \n");
	else
	{
		switch (tolower(ch))
		{
			case 'a': case 'e': case 'i': case 'o': case 'u':
				printf("The character is a vowel \n");
				break;
			default:
				printf("The character is a consonant \n");
				break;
		}
	}

	return 0;
}
