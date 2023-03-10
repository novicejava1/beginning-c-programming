/* Recruiting example */
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int age = 0;
	int college = 0;
	int subject = 0;
	bool interview = false;

	// Get data of applicant
	printf("What College : 1 - Harvard, 2 - Yale, 3 - Others \n");
	scanf("%d", &college);
	printf("What subject : 1 - Chemistry, 2 - Economics, 3 - Others \n");
	scanf("%d", &subject);
	printf("Applicant's age : \n");
	scanf("%d", &age);

	// Checkout the applicant
	if ((age > 25 && subject == 1) && (college == 3 || college == 1))
		interview = true;
	if (college == 2 && subject == 1)
		interview = true;
	if (college == 1 && subject == 2 && !(age > 28))
		interview = true;
	if (college == 2 && (subject == 2 || subject == 3) && age > 25)
		interview = true;

	if (interview)
		printf("Give them an interview \n");
	else
		printf("Reject them \n");

	return 0;

}
