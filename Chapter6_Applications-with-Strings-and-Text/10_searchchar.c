/* Search a string for a character */
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "This is podman";
    char search = 'd';
    char *searchcharaddr = NULL;
    searchcharaddr = strchr(str, search);
    if(searchcharaddr)                              // Ensure that you don’t attempt to dereference a NULL pointer
        printf("Found the search character \"%c\" in string \"%s\"\n", *searchcharaddr, str);

}