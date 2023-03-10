/* Example for date formatting */
#include <stdio.h>

int main(void)
{
	int day = 0;
	int month = 0;
	int year = 0;

	printf("Enter the date in day-month-year format \n");
	scanf("%d-%d-%d", &day, &month, &year);

	switch (day)
	{
		case 1: case 21: case 31:
			if (month == 1)
				printf("%dst January %d \n", day, year);
			else if (month == 2)
				printf("%dst February %d \n", day, year);
			else if (month == 3)
				printf("%dst March %d \n", day, year);
			else if (month == 4)
				printf("%dst April %d \n", day, year);
			else if (month == 5)
				printf("%dst May %d \n", day, year);
			else if (month == 6)
				printf("%dst June %d \n", day, year);
			else if (month == 7)
				printf("%dst July %d \n", day, year);
			else if (month == 8)
				printf("%dst August %d \n", day, year);
			else if (month == 9)
				printf("%dst September %d \n", day, year);
			else if (month == 10)
				printf("%dst October %d \n", day, year);
			else if (month == 11)
				printf("%dst November %d \n", day, year);
			else if (month == 12)
				printf("%dst December %d \n", day, year);
			else
				printf("Incorrect month entered \n");
			break;
		case 2: case 22:
			//printf("%dnd %d %d \n", day, month, year);
                        if (month == 1)
                                printf("%dnd January %d \n", day, year);
                        else if (month == 2)
                                printf("%dnd February %d \n", day, year);
                        else if (month == 3)
                                printf("%dnd March %d \n", day, year);
                        else if (month == 4)
                                printf("%dnd April %d \n", day, year);
                        else if (month == 5)
                                printf("%dnd May %d \n", day, year);
                        else if (month == 6)
                                printf("%dnd June %d \n", day, year);
                        else if (month == 7)
                                printf("%dnd July %d \n", day, year);
                        else if (month == 8)
                                printf("%dnd August %d \n", day, year);
                        else if (month == 9)
                                printf("%dnd September %d \n", day, year);
                        else if (month == 10)
                                printf("%dnd October %d \n", day, year);
                        else if (month == 11)
                                printf("%dnd November %d \n", day, year);
                        else if (month == 12)
                                printf("%dnd December %d \n", day, year);
                        else
                                printf("Incorrect month entered \n");
			break;
		case 3: case 23:
			//printf("%drd %d %d \n", day, month, year);
                        if (month == 1)
                                printf("%drd January %d \n", day, year);
                        else if (month == 2)
                                printf("%drd February %d \n", day, year);
                        else if (month == 3)
                                printf("%drd March %d \n", day, year);
                        else if (month == 4)
                                printf("%drd April %d \n", day, year);
                        else if (month == 5)
                                printf("%drd May %d \n", day, year);
                        else if (month == 6)
                                printf("%drd June %d \n", day, year);
                        else if (month == 7)
                                printf("%drd July %d \n", day, year);
                        else if (month == 8)
                                printf("%drd August %d \n", day, year);
                        else if (month == 9)
                                printf("%drd September %d \n", day, year);
                        else if (month == 10)
                                printf("%drd October %d \n", day, year);
                        else if (month == 11)
                                printf("%drd November %d \n", day, year);
                        else if (month == 12)
                                printf("%drd December %d \n", day, year);
                        else
                                printf("Incorrect month entered \n");
			break;
		case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 24: case 25: case 26: case 27: case 28: case 29: case 30:
			//printf("%dth %d %d \n", day, month, year);
                        if (month == 1)
                                printf("%dth January %d \n", day, month, year);
                        else if (month == 2)
                                printf("%dth February %d \n", day, month, year);
                        else if (month == 3)
                                printf("%dth March %d \n", day, month, year);
                        else if (month == 4)
                                printf("%dth April %d \n", day, month, year);
                        else if (month == 5)
                                printf("%dth May %d \n", day, month, year);
                        else if (month == 6)
                                printf("%dth June %d \n", day, month, year);
                        else if (month == 7)
                                printf("%dth July %d \n", day, month, year);
                        else if (month == 8)
                                printf("%dth August %d \n", day, month, year);
                        else if (month == 9)
                                printf("%dth September %d \n", day, month, year);
                        else if (month == 10)
                                printf("%dth October %d \n", day, month, year);
                        else if (month == 11)
                                printf("%dth November %d \n", day, month, year);
                        else if (month == 12)
                                printf("%dth December %d \n", day, month, year);
                        else
                                printf("Incorrect month entered \n");
			break;
		default:
			printf("Enter the correct date \n");
			break;
	}

	return 0;
}
