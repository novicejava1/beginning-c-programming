/* Example average of grades with arrays */
#include <stdio.h>

int main(void)
{
	int grades[10];
	unsigned int count = 10;
	long sum = 0L;
	float average = 0.0f;

	for(unsigned int i = 0; i < count; ++i)
	{
		printf("%2u> ", i + 1);
		scanf("%d", &grades[i]);

		sum += grades[i];
	}

	average = (float)sum/count;

	// List the grades
	for(unsigned int i = 0; i < count; ++i)
	{
		printf("%d ", grades[i]);
	}

	printf("\nAverage of 10 grades is : %.2f \n", average);

	return 0;
}
