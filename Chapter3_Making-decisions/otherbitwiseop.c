/* Example for other bitwise operators */
#include <stdio.h>

int main(void)
{
	int x = 13;
	int z = ~x;
	printf("Not x is : %d \n", z);	// bitwise NOT operator
	
	int value = 12;
	int shiftcount = 3;
	int result = value << shiftcount;
	printf("Shift left by %d of %d is %d \n", shiftcount, value, result); 	// Left shift operator




	return 0;
}
