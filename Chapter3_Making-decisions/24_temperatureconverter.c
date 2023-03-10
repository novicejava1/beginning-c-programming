/* Example for temperature converter */
#include <stdio.h>

int main(void)
{
	double temperature = 0.0;
	double result = 0.0;
	enum convert_type { DEGREE_TO_FAREN, FAREN_TO_DEGREE};
	enum convert_type type = 0;
	printf("Enter the conversion type : 0 - DEGREE_TO_FAREN, 1 - FAREN_TO_DEGREE \n");
	scanf("%d", &type);

	switch (type)
	{
		case DEGREE_TO_FAREN:
			printf("Enter the temperature in DEGREE : ");
			scanf("%lf", &temperature);
			printf("Convert temperature from DEGREE to FARENHEIT \n");
			result = (temperature * 1.8) + 32.0;
			printf("%lf \n", result);
			break;
		case FAREN_TO_DEGREE:
			printf("Enter the temperature in FARENHEIT : ");
			scanf("%lf", &temperature);
			printf("Convert temperature from FARENHEIT to DEGREE \n");
			result = (temperature - 32.0) * 5.0 / 9.0;
			printf("%lf \n", result);
			break;
		default:
			printf("Enter the correct type for conversion \n");
	}

	return 0;
}
