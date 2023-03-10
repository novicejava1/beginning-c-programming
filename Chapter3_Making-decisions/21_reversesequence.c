/* Example to reverse the sequence of characters */
#include <stdio.h>

int main(void)
{
	unsigned int original = 0xABC;
	unsigned int result = 0;
	unsigned int mask = 0xF;

	printf("Original = %X \n", original);

	// Insert first digit in result
	result |= original & mask;
	printf("Result = %X \n", result);

	// Get second digit
	original >>= 4;
	result <<= 4;
	result |= original & mask;
	printf("Result = %X \n", result);

	// Get third digit
	original >>= 4;
	result <<= 4;
	result |= original & mask;
	printf("Result = %X \n", result);

	return 0;


}
