/* Example salary indicator using else if statement */
#include <stdio.h>

int main(void)
{
	int salary = 0;

	printf("Enter the salary of the person : ");
	scanf("%d", &salary);

	if (salary < 5000)
		printf("Your pay is very less \n");
	else if (salary < 15000)
		printf("Your pay is good \n");
	else if (salary < 100000)
		printf("Your pay is very good \n");
	else
		printf("Your pay is exceptional !! \n");

	return 0;
}
