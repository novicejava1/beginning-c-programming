/* Array and Pointer similariity */
#include <stdio.h>

int main(void)
{
    char book[] = "python";
    printf ("book array variable points to first byte address : %p\n", book);

    char *pbook = &book[0];
    printf ("pointer pbook points to first byte adderss : %p\n", pbook);

    return 0;
}
