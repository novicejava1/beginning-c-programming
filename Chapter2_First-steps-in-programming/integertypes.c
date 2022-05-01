/* Declare and Display different integer types */
#include <stdio.h>

int main(void)
{
	// Signed integer types
	short weight = 45;
	int decrease = -4;
	long big_number = 2346780L;
	long long really_big_number = 123456789LL;


	printf("\n\nSigned integer types \n\n");
	printf("weight: %hd\n", weight);
	printf("decrease: %d\n", decrease);
	printf("big_number: %ld\n", big_number);
	printf("really_big_number: %lld\n", really_big_number);

	// Unsigned integer types
	unsigned int count = 100U;
	unsigned long value = 999999999UL;
	unsigned long long metersPerLightYear = 9460730472580800ULL;

	printf("\n\nUnsigned integer types \n\n");
	printf("count: %u\n", count);
	printf("value: %u\n", value);
	printf("metersPerLightYear: %u\n", metersPerLightYear);
}