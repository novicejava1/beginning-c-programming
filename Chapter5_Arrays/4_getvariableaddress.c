/* Display the address of the variables */
#include <stdio.h>

int main(void)
{
	long a = 1L;
	long b = 2L;
	long c = 3L;

	double d = 4.0;
	double e = 5.0;
	double f = 6.0;

	printf("Size of type long is : %u \n", sizeof(long));
	printf("Address of long variable a is : %p \n", &a);
	printf("Address of long variable b is : %p \n", &b);
	printf("Address of long variable c is : %p \n", &c);

        printf("Size of type double is : %u \n", sizeof(double));
        printf("Address of double variable d is : %p \n", &d);
        printf("Address of double variable e is : %p \n", &e);
        printf("Address of double variable f is : %p \n", &f);

}

