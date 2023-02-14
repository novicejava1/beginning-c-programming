#include <stdio.h>

int main(void)
{
    int a=2, b=5;
    int t, f, x;
    t = getchar();
    fflush(stdin);
    f = getchar();
    f = getchar();          // flush seems not clearing up the stdin
    x = ((a>b)?t:f);
    putchar(x);
    return 0;

}
