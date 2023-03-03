#include <stdio.h>

int main(void)
{
    int ch, n;
    ch = getchar();
    n = (ch >= 'a') && (ch <= 'z') ? putchar(ch + 'A' - 'a') : putchar(ch);
    return 0;
}