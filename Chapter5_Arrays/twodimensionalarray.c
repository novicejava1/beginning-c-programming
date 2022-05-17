/* Example two dimensional array */
#include <stdio.h>

int main(void)
{
	int numbers[3][4] = {
				
				{10, 20, 30, 40},
				{15, 25, 35, 45},
				{47, 48, 49, 50}
				
			};

	printf("Display the second row and third column value : %d \n", numbers[1][2]);

	return 0;
}

