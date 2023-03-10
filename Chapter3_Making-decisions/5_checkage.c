/* Check age and display a message */
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int age = 0;

	printf("Enter your age : ");
        scanf("%d", &age);

	bool test1 = age > 12;
	bool test2 = age < 20;

	printf("test1 : %d \n", test1);
	printf("test2 : %d \n", test2);

	if (test1 && test2)
		printf("You are officially a teenager \n");
	else
		printf("For sure you are not a teenager \n");

	if (true)
		printf("This is boolean true constant \n");
	
	return 0;
}
