/* Calculate Sring length new */


#include <stdio.h>
//#define __STDC_WANT_LIB_EXT1__ 1
//#include <string.h>

int main(void)
{
    char str[][70] = {
        "Computers do what you tell them to do, not what you want them to do.",
        "When you put something in memory, remember where you put it.",
        "Never test for a condition you don't know what to do with.",
    };

    unsigned int count = 0;
    unsigned int strCount = sizeof(str)/sizeof(str[0]);
    printf("There are %u strings.\n", strCount);

    for(unsigned int i = 0; i < strCount; ++i)
    {
        //printf("The string:\n   \"%s\"\n contains %zu characters.\n", str[i], strnlen_s(str[i], sizeof(str[i]))); // Not Working for me as support optional functions not present
        printf("The string:\n   \"%s\"\n contains %zu characters.\n", str[i], strnlen(str[i], sizeof(str[i])));
    }
}