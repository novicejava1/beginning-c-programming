/* Avg of grades without using arrays */
#include <stdio.h>

int main(void)
{
	int grade = 0;
	unsigned int count = 10;
	long sum = 0L;
	float average = 0.0f;

	// Read the grades to be averaged
	for(unsigned int i = 0; i < count; ++i)
	{
		printf("Enter the grade %d : ", i);
		scanf("%d", &grade);
		sum += grade;
	}

	average = (float)sum/count;
	printf("Average of ten grades enteres is : %f\n", average);
	return 0;
}
