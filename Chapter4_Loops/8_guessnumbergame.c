/* Guess a number game */
#include <stdio.h>

int main(void)
{
	int chosen = 15;
	int guess = 0;
	int count = 3;

	printf("This is a guessing game \n");
	printf("I have choosen a number between 1 and 20 which you musht guess.. \n");

	for(; count > 0; --count)
	{
		printf("You have %d tr%s left.", count, count == 1 ? "y" : "ies");
		printf("Enter a guess : ");
		scanf("%d", &guess);

		if(guess == chosen)
		{
			printf("Congrats you guessed it correctly \n");
			return 0;
		}
		else if(guess < 1 || guess > 20)
			printf("Guess the number between 1 to 20");
		else
			printf("Sorry, %d is wrong. My number is %s than that.\n", guess, chosen > guess ? "greater" : "less");

	}

	printf("\nYou have had three tries and failed. The number was %d\n", chosen);
	return 0;
}
