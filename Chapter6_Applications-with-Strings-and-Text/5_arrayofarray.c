/* Two Dimensional array example */
#include <stdio.h>

int main(void)
{

    unsigned int count = 0;

    char sayings[3][100] = {
        "Imagination is more important than knowlege",
        "Never let down",
        "Determination, Dedication and Diligence"
    };

    char strange[][43] = {                                      // You must specify the second dimension in an array of strings
        "Is AI the future that would break",
        "Will it surpase the neural systems",
        "It would never"
    };

    for(unsigned int i = 0; i < sizeof(sayings)/sizeof(sayings[0]); ++i)
    {
        count = 0;
        while (sayings[i][count])
        {
            ++count;
        }

        printf("%s has %d characters\n", sayings[i], count);
    }

    for(unsigned int i = 0; i < sizeof(strange)/sizeof(strange[0]); ++i)
    {
        count = 0;
        while (strange[i][count])
        {
            ++count;
        }

        printf("%s has %d characters\n", strange[i], count);
    }

    return 0;
}