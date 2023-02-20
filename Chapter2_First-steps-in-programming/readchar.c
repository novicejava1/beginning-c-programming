/* Read a Character */
#include <stdio.h>

int main(void)
{
    char ch = 0;
    printf("Enter a character : ");
    scanf("%c", &ch);
    printf("The character is : %c\n", ch);
    printf("The character code is : %d\n", ch);

    return 0;
}