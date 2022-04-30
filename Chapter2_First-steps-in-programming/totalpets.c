/* Program to display total pets */
#include <stdio.h>

int main(void)
{
	int total_pets;
	int cats = 2;
	int dogs = 1;
	int ponies = 1;
	int others = 46;

	total_pets = cats + dogs + ponies + others;			// calculate the total pets
	printf("We have %d pets in total\n", total_pets);	// display the total pets
	return 0;
}