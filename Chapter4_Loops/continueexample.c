/* Example with continue statement */
#include <stdio.h>

int main(void)
{
	enum Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
	
	for(enum Day day = Monday; day <= Sunday; ++day)
	{
		if(day == Wednesday)
			continue;
		printf("Its not Wednesday. So do something useful\n");
	}

	return 0;
}
