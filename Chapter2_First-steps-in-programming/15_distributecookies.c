/* Distribute cookies among childeres */
#include <stdio.h>

int main(void)
{
	int childrens = 7;
	int cookies = 45;

	int cookies_per_child = 0;
	int cookies_left_over = 0;

	cookies_per_child = cookies/7;
	cookies_left_over = cookies%7;

	printf("Cookies per child : %d\n", cookies_per_child);
	printf("Cookies left over : %d\n", cookies_left_over);
}