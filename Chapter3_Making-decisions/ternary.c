/* Ternary example */
#include <stdio.h>

int main(void)
{
    int x, y;
    printf("Enter x : 5");
    scanf("%d", &x);

    y = ((x>5)? "This is it\n" : "Still trying to match\n");
    printf("%s", y);
}