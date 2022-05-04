/* enum example for weekdays */
#include <stdio.h>

int main(void)
{
	enum weekdays {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
	enum weekdays today = Wednesday;
	printf("Today is : %d \n", today);

	enum weekends {Sat, Sun} itsweekend = Sun;
	printf("Its weekend : %d \n", itsweekend);

	return 0;
}
