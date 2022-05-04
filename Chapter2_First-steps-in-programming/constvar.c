/* Calculate circumference and area of circle */
#include <stdio.h>
//#define PI 3.14159265

int main(void)
{
	float radius = 0.0f;
	float diameter = 0.0f;
	float cirumference = 0.0f;
	float area = 0.0f;
	const float Pi = 3.14159265f;

	printf("Input the diameter of the table\n");
	scanf("%f", &diameter);

	radius = diameter/2.0f;
	cirumference = 2.0f*Pi*radius;
	area = Pi*radius*radius;

	printf("\n\nThe cirumference of table is %f\n", cirumference);
	printf("\n\nThe area of the table is %f\n", area);

	return 0;
}
