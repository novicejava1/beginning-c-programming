/* Example for sum of three dimensional array values */
#include <stdio.h>

int main(void)
{
	int numbers[2][3][4] = {
				{
					{1, 2, 3, 4},
					{5, 6, 7, 8},
					{9, 10, 11, 12}
				},
				{
					{13, 14, 15, 16},
					{17, 18, 19, 20},
					{21, 22, 23, 24}
				}	
			};

	int sum = 0;

	for(int i = 0; i < 2; ++i)
	{
		for(int j = 0; j < 3; ++j)
		{
			for(int k = 0; k < 4; ++k)
				sum += numbers[i][j][k];
		}
		
	}

	printf("The sum of all the elements in three dimensional array is : %d \n", sum);

	return 0;
}
