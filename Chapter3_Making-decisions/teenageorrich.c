/* Validate if teenager or rich */
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int age = 0;
	int savings = 0;

	printf("Enter the age : ");
	scanf("%d", &age);
	printf("Enter the savings : ");
	scanf("%d", &savings);

	bool over_12 = age > 12;
	bool under_20 = age < 20;
	bool age_check = over_12 && under_20;
	bool savings_check = savings > 5000;

	if (age_check || savings_check)
		printf("Either you are a teenager or you are rich, or possibly both\n");
	else
		printf("Further check is required.. \n");

	return 0;
}
