/* Expense calculation */
#include <stdio.h>

int main(void)
{
    int qty, dis = 0;
    float rate, total;

    printf("Enter quantity and rate : \n");
    scanf("%d, %f", &qty, &rate);

    if (qty > 1000)
    {
        dis = 10;
    }
    
    total = ( qty * rate ) - ( qty * rate * dis / 100 ) ;
    printf("Total Expense is : %f \n", total);

    return 0;
}