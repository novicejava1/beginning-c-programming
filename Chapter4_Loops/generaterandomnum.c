/* Example to generate random number */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));		// Initialize sequence with a particular seed
	int random1, random2, random3 = 0;
	random1 = rand();
	random2 = rand();
	random3 = rand();

	printf("Generated randon number is : %d \n", random1);
	printf("Generated random number is : %d \n", random2);
	printf("Generated random number is : %d \n", random3);

	return 0;
}
