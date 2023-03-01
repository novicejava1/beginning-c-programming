/* Example Dynamic Memory Allocation */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *pnum = (int*)malloc(25*sizeof(int));
    if(!pnum)
    {
        printf("Failed to allocate Dynamic memory\n");
    }
    else
    {
        printf("Dynamic Memory allocated. Free up the heap space once utilized.\n");
        free(pnum);
        pnum = NULL;
    }

    return 0;
}