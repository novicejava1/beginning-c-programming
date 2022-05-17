/* Example to get the Hat size */
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	/*********************************************************
	* The size array stores hat sizes from 6 1/2 to 7 7/8 *
	* Each row defines one character of a size value so
	* a size is selected by using the same index for each *
	* the three rows. e.g. Index 2 selects 6 3/4.
	*********************************************************/

	char size[3][12] = {
		{'6', '6', '6', '6', '7', '7', '7', '7', '7', '7', '7', '7'},
		{'1', '5', '3', '7', ' ', '1', '1', '3', '1', '5', '3', '7'},
		{'2', '8', '4', '8', ' ', '8', '4', '8', '2', '8', '4', '8'}
	};

	int headsize[12] = {164,166,169,172,175,178,181,184,188,191,194,197}; // Values in 1/8 inches
	
	float cranium = 0.0f;
	int your_head = 0;
	bool hat_found = false;

	printf("Enter the circumference of your head above your eyebrows");
	scanf("%d", &cranium);

	your_head = (int)(8.0f*cranium);	// Convert to whole eighths of an inch
	
	size_t i = 0;
	if(your_head == headsize[i])
		hat_found = true;
	else
	{
		for(i = 1; i < sizeof(headsize); ++i)
		{
			if(your_head > headsize[i-1] && your_head <= headsize[i])
			{
				hat_found = true;
				break;
			}
		}
	
	}

	if(hat_found)
	{
		printf("Your hat size is %c %c%c%c\n", size[0][i], size[1][i], (size[1][i]==' ') ? ' ' : '/', size[2][i] );
	}
	else
	{
		if(your_head < headsize[0])
			printf("\nYou are the proverbial pinhead. No hat for\n");
		else
			printf("\nYou, in technical parlance, are a fathead.\n");
	}

	return 0;
	

}
