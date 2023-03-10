/* Example to display box using nested loop */
#include <stdio.h>

int main(void)
{
	const unsigned int MIN_SIZE = 3;
	unsigned int width = 0;
	unsigned int height = 0;

	printf("Enter values for the width and height (min of %u)", MIN_SIZE);
	scanf("%u%u", &width, &height);

	if(width < MIN_SIZE)
		width = MIN_SIZE;
	if(height < MIN_SIZE)
		height = MIN_SIZE;

	for(unsigned int i = 0; i < width; ++i)
		printf("*");

	for(unsigned int j = 0; j < height; ++j)
	{
		printf("\n*");
		for(unsigned int i = 0; i < width - 2; ++i)
			printf(" ");
		printf("*");
	}
	printf("\n");
	
	for(unsigned int i = 0; i < width; ++i)
		printf("*");

	printf("\n");

	return 0;
}
