/* Improved version of guess number game */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int chosen = 0;
	int guess = 0;
	int count = 3;
	int limit = 20;

	srand(time(NULL));
	chosen = 1 + rand() % limit;

	printf("This is a guessing game \n");
	printf("Guess a number between 1 and 20 \n");

	for(; count > 0; --count)
	{
		printf("You have %d tr%s left \n", count, count == 1 ? "y" : "ies");
		printf("Enter a guess: ");
		scanf("%d", &guess);

		if(guess == chosen)
		{
			printf("You guessed it correctly");
			return 0;
		}
		else if(guess < 1 || guess > 20)
		{
			printf("Guess between 1 and 20");
		}
		else
			printf("Sorry your guess is incorrect. My number is %s than the guessed number \n", chosen > guess ? "greater" : "less");
	}
	printf("You have three tries and failed. The number was %d \n", chosen);

	return 0;
}
