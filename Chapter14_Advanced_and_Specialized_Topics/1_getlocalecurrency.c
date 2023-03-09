/* Example to get the local currency */
#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "US");
    struct lconv *pconventions = localeconv();
    printf(" The currency symbol in use is %c.\n", *(pconventions->currency_symbol));
}