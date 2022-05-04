/* Display limit of each type */
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	printf("signed char min %d and max %d\n", CHAR_MIN, CHAR_MAX);
	printf("signed short min %d and max %d\n", SHRT_MIN, SHRT_MAX);
	printf("signed int min %d and max %d\n", INT_MIN, INT_MAX);
	printf("signed long min %ld and max %ld\n", LONG_MIN, LONG_MAX);
	printf("signed long long min %lld and max %lld\n", LLONG_MIN, LLONG_MAX);

	printf("unsigned char min 0 and max %u\n", UCHAR_MAX);
	printf("unsigned short min 0 and max %u\n", USHRT_MAX);
	printf("unsigned int min 0 and max %u\n", UINT_MAX);
	printf("unsigned long min 0 and max %lu\n", ULONG_MAX);
	printf("unsinged long long min 0 and max %llu\n", ULLONG_MAX);

	printf("Float min %.3e\n", FLT_MIN);
	printf("Float max %.3e\n", FLT_MAX);
	printf("Double min %.3e\n", DBL_MIN);
	printf("Double max %.3e\n", DBL_MAX);
	printf("Long double min %.3Le\n", LDBL_MIN);
	printf("Long double max %.3Le\n", LDBL_MAX);

	printf("variable of type float provides %u decimal digits precision\n", FLT_DIG);
	printf("variable of type double provides %u decimal digits precision\n", DBL_DIG);
	printf("variable of type long double provides %u decimal digits precision\n", LDBL_DIG);




}
