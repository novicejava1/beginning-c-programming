/* Example to generate random number */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));		// Initialize sequence with a particular seed
	int chosen = 0;
	chosen = rand();
	
	printf("Generated randon number is : %d \n", chosen);



	return 0;
}
