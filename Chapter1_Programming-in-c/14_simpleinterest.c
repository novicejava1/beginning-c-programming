/* Calculate Simple Interest */
#include <stdio.h>

int main(void)
{
    int p, n;
    float r, si;

    printf("Input values for p, n, r : \n");
    scanf("%d, %d, %f", &p, &n, &r);

    si = p * n * r / 100;   // calculating simple interest

    printf("%f", si);
    return 0;
}