/* Example to demonstrate max value function macro */
#include <stdio.h>
#define max(x, y) (x > y) ? x : y

int main(void)
{
    int x = 25;
    int y = 20;
    int maxvalue = 0;
    maxvalue = max(x, y);
    printf("Maximum value of x=%d and y=%d is %d\n", x, y, maxvalue);

    return 0; 

}