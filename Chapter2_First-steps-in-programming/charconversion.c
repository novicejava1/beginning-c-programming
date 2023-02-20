/* Convert Char from upper to lower and vice-versa */

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch1 = 'S';
    char ch2 = 'b';
    char upper = '0';
    char lower = '0';

    upper = toupper(ch2);
    lower = tolower(ch1);

    printf("%c is converted to %c\n", ch1, lower);
    printf("%c is converted to %c\n", ch2, upper);

    return 0;

}