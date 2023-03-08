/* Example to generate log from code issue */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *filename = "dummy.txt";
    char *pfile = NULL;

    pfile = fopen(filename, "r");
    if(!pfile)
    {
        fprintf(stderr, "Failed to open file in %s line %d\n", __FILE__, __LINE__);
    }


}