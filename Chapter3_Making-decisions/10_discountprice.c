/* Calculate discounted price of product */
#include <stdio.h>

int main(void)
{
	const double unit_price = 3.50;
	int quantity = 0;
	double total = 0.0;

	printf("Enter the quantity you want to buy : ");
	scanf("%d", &quantity);

	if (quantity > 10)
		total = quantity*unit_price*0.95;
	else
		total = quantity*unit_price;

	printf("Total price of %d is $%.2f \n", quantity, total);

	return 0;

}
