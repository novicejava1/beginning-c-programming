/* Display the main argument values */
#include <stdio.h>

int main(int argc, char *argv[])
{
    printf("Program name is : %s\n", argv[0]);
    for(int i = 1; i < argc; ++i)
        printf("Arguments %d : %s\n", i, argv[i]);
}