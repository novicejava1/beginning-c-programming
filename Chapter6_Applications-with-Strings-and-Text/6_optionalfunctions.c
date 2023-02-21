/* Check for Optional String Processing functions presence */
#include <stdio.h>

int main(void)
{
    #if defined __STD_LIB_EXT1__
        printf("Optional Functions are defined.\n");
    #else
        printf("Optional Functions are not defined");
    #endif
        return 0;
}