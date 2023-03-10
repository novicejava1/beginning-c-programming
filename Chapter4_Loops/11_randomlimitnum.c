/* Generate random number within a range */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int random1, random2, random3 = 0;
	int limit = 20;

	random1 = rand() % limit;
	random2 = rand() % limit;
	random3 = rand() % limit;
	printf("Generated random number in range 0 to 20 is : %d \n", random1);
	printf("Generated random number in range 0 to 20 is : %d \n", random2);
	printf("Generated random number in range 0 to 20 is : %d \n", random3);
}
