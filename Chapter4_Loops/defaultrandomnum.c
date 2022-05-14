/* Example to generate default random number */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int random1 = 0;
	int random2 = 0;
	random1 = rand();
	random2 = rand();

	printf("Default Random number is : %d \n", random1);
	printf("Default Random number is : %d \n", random2);
	return 0;
}

