/* Example on character arithmetic */
#include <stdio.h>

int main(void)
{
	char first = 'A';
	char second = 'B';
	char last = 'Z';

	char number = 40;

	char ex1 = first + 2;
	char ex2 = second - 1;
	char ex3 = last + 2;

	printf("Character values : %-5c%-5c%-5c \n", ex1, ex2, ex3);
	printf("Numeric equivalent : %-5d%-5d%-5d \n", ex1, ex2, ex3);

	printf("The number %d is the code for character %c \n", number, number);

	return 0;
}
