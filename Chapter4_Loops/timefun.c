/* Example time function */
#include <stdio.h>
#include <time.h>

int main()
{
	time_t seconds;

	seconds = time(NULL);
	printf("Seconds since January 1, 1970 seconds = %ld\n", seconds);
	
	time_t secondsptr;
	secondsptr = time(&secondsptr);
	printf("Seconds since January 1, 1970 secondsptr = %ld\n", secondsptr);
	
	
	return 0;


}
