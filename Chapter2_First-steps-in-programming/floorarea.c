/* Calculate the floor area */
#include <stdio.h>

int main(void)
{
	float floor_length = 0.0f;
	float floor_width = 0.0f;
	float area = 0.0f;

	printf("Enter the floor length : ");
	scanf("%f", &floor_length);
	printf("Enter the floor width : ");
	scanf("%f", &floor_width);

	area = floor_length*floor_width;
	printf("Area of the floor is : %5.2f \n", area);

	return 0;

}

