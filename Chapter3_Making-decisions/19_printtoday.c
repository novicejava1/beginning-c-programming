/* Example to display today's day using enum and switch */
#include <stdio.h>

int main(void)
{
	enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
	enum Weekday today = Tuesday;

	switch (today)
	{
		case Monday:
			printf("Today is Monday \n");
			break;
		case Tuesday:
			printf("Today is Tuesday \n");
			break;
		case Wednesday:
			printf("Today is Wednesday \n");
			break;
		case Thursday:
			printf("Today is Thursday \n");
			break;
		case Friday:
			printf("Today is Friday \n");
			break;
		case Saturday:
			printf("Today is Saturday \n");
			break;
		case Sunday:
			printf("Today is Sunday \n");
			break;
		default:
			printf("Its not a Weekday \n");
			break;
	}

	return 0;
}
