/* Search multiple occurance of character */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "This is Python from Ponte Python";
    char searchchar = 'P';
    char *searchcharaddr = str;

    int counter = 0;

    while(searchcharaddr = strchr(searchcharaddr, searchchar))
    {   
        printf("Address of before searchcharaddr %p\n", &searchcharaddr);
        ++counter;
        ++searchcharaddr;
        printf("%d\n", counter);
        printf("Address of after searchcharaddr %p\n", &searchcharaddr);

    }

}
