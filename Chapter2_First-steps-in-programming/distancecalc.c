/* Calculate distance in yards, feets and inches */
#include <stdio.h>

int main(void)
{
	float distance_in_inches = 0.0f;
	float distance_in_yards = 0.0f;
	float distance_in_feets = 0.0f;
	const float inches_per_foot = 12.0f;
	const float feets_per_yard = 3.0f;

	printf("Enter the distance in inches : ");
	scanf("%f", &distance_in_inches);

	distance_in_feets = distance_in_inches/inches_per_foot;
	distance_in_yards = distance_in_feets/feets_per_yard;
	printf("Distnace in feets : %f \n", distance_in_feets);
	printf("Distance in yards : %f \n", distance_in_yards);

	return 0;
}
