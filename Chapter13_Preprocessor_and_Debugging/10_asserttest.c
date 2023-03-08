/* Example to demonstarte runtime assertion */
#include <stdio.h>
//#define NDEBUG                              // NDEBUG is enabled, assertion is switched off
#include <assert.h>

int main(void)
{
    int processedfilesize = 110;
    assert(processedfilesize < 100);            // NDEBUG is enabled, assertion is switched off
    printf("Progressing as processed filesize is in limits\n");
}