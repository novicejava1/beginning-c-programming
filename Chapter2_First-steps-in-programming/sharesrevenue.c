/* Example to calculate revenue of shares */
#include <stdio.h>

int main(void)
{
	const float revenue_per_150 = 4.5f;
	unsigned short jansold = 23500;
	unsigned short febsold = 19300;
	unsigned short marsold = 21600;
	float revquarter = 0.0f;

	unsigned long quartersold = jansold + febsold + marsold;
	printf("Stocks sold in Jan : %d, Feb : %d, Mar : %d \n", jansold, febsold, marsold);
	printf("Total stocks sold in quarter : %ld \n", quartersold);

	revquarter = (quartersold*revenue_per_150)/150;
	printf("Sales revenue this quarter : $%.2f \n", revquarter);

}