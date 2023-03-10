/* Compoare weight and display a message */
#include <stdio.h>

int main(void)
{
	int my_weight = 169;
	int your_weight = 175;

	if (your_weight > my_weight)
		printf("You are heavier than me.. \n");

	if (your_weight < my_weight)
		printf("I am heavier than you.. \n");

	if (your_weight == my_weight)
		printf("We both are of same weight");

	return 0;
}
