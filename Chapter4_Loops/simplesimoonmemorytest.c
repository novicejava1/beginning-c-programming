/* Simple Simon memeory test game */
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char another_game = 'Y';
	const unsigned int DELAY = 1;
	bool correct = true;
	unsigned int tries = 0;
	unsigned int digits = 0;
	time_t seed = 0;
	unsigned int number = 0;
	time_t wait_start = 0;
	clock_t start_time = 0;
	unsigned int score = 0;
	unsigned int total_digits = 0;
	unsigned int game_time = 0;

	printf("To play Simple Simon Game \n");
	printf("Watch the screen for a sequence of digits \n");
	printf("The digits are displayed only for %u second", DELAY);
	printf("The computer will remove the sequence and prompt to enter the same sequeunce again \n");
	printf("When you do, you must put spaces between the digits");
	printf("Good Luck!! Please enter to play \n");
	scanf("%c", &another_game);

	do
	{
		// Initialize the game
		// Inner loop to play the game
		// Output the score when a game is finished
		// Check if a new game is required
		
		correct = true;
		tries = 0;
		digits = 2;
		start_time = clock();

		while(correct)
		{
			++tries;
			wait_start = clock();

			srand(time(&seed));
			for(unsigned int i = 1; i <=digits; ++i)
				printf("%d", rand() % 10);

			for(; clock() - wait_start < DELAY*CLOCKS_PER_SEC; );
			
			printf("\r");
			for(unsigned int i = 1; i <= digits; ++i)
				printf("  ");

			if(tries == 1)
				printf("Now enter the sequence with space \n");
			else
				printf("\r");

			srand(seed);
			for(unsigned int i = 1; i <= digits; ++i)
			{
				scanf("%u", &number);
				if(number != rand() % 10)
				{
					correct = false;
					break;
				}
			}

			if(correct && ((tries % 3) == 0))
				++digits;

			printf("%s\n", correct ? "Correct!" : "Wrong!");
		}

		score = 10*(digits - ((tries % 3) == 1));
		total_digits = digits*(((tries % 3) == 0) ? 3 : tries % 3);
		if(digits > 2)
			total_digits += 3*((digits - 1)*(digits - 2)/2 - 1);

		game_time = (clock() - start_time)/CLOCKS_PER_SEC - tries*DELAY;

		if(total_digits > game_time)
			score += 10*(game_time - total_digits);
		printf("\n\nGame time was %u seconds. Your score is %u", game_time, score);
		fflush(stdin);

		printf("Do you want to play again (y/n): ");
		scanf(" %c", &another_game);
	
	}while(toupper(another_game) == 'Y');

	return 0;
}

