/* Copy String from source to destination */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char source[] = "A stich in time saves nine..";
    char dest[50];

    if(strncpy(dest, source, 7))
    {
        printf("%s\n", dest);
        printf("copied the string");
    }
}