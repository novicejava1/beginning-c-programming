/* Example Constant to a Pointer */
#include <stdio.h>

int main(void)
{
    int count = 43;
    int *const pcount = &count;

    int item = 43;
    //pcount = &item;       // Pointer Address Cannot be changed

    *pcount = 45;            // Value at the Pointer Address can still be changed
    printf("%d\n", *pcount);

    int item2 = 25;                     
    const int *const pitem = &item2;     // Define a constant pointer that points to value that is constant
    printf("%d\n", *pitem);

    return 0;
}