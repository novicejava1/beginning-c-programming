/* Program to define a macro */
#include <stdio.h>

#define INCHES_PER_FOOT 12											// Replaces INCHES_PER_FOOT Symbol constant with string 12

int main(void)
{
	printf("There are %d inches in a foot.\n", INCHES_PER_FOOT);
	return 0;
}