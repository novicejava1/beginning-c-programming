/* Example for bitwise and operator */
#include <stdio.h>

int main(void)
{
	// Bitwise operators operate only on integer operands
	int x = 13;
	int y = 6;

	int z = x & y;
	printf("%d & %d = %d \n", x, y, z);

	return 0;
}

