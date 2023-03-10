/* Example to display address and content */
#include <stdio.h>

int main(void)
{
	int data[5];
	for(unsigned int i = 0; i < 5; ++i)
	{
		data[i] = 12*(i+1);
		printf("data[%d] Address: %p Content: %d\n", i, &data[i], data[i]);
	}

	return 0;
}
