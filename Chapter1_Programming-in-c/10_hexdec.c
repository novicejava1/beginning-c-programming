#include <stdio.h>

int main(void)
{
    int x = 15;     // decimal number
    int h = 0xb;    // hex number
    int o = 013;    // octal number

    printf("Hex value of x: %x\n", x);
    printf("Oct value of x: %o\n", x);
    printf("Dec value of x: %d\n\n", x);

    printf("Hex value of h: %x\n", h);
    printf("Oct value of h: %o\n", h);
    printf("Dec value of h: %d\n\n", h);

    printf("Hex value of o: %x\n", o);
    printf("Oct value of o: %o\n", o);
    printf("Dec value of o: %d\n\n", o);
}