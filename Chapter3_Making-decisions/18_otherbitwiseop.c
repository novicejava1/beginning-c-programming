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

	unsigned int value1 = 65372U;
	int shiftcount1 = 2;
	unsigned int result1 = value1 >> shiftcount1;
	printf("Shift Right by %d of %d is %d \n", shiftcount1, value1, result1);	// Right shift with unsinged integer

	signed int value2 = -164;
	int shiftcount2 = 2;
	signed int result2 = value2 >> shiftcount2;
	printf("Shift Right by %d of %d is %d \n", shiftcount2, value2, result2);	// Right shift with signed integer

	return 0;
}
