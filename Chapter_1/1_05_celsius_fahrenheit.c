#include <stdio.h>

int	main(void)
{
	float	celsius;
	float	fahr;

	printf("Celsius\t\tFahr\n");
	printf("----------------------\n");
	for (celsius = 300; celsius >= 0; celsius = celsius - 20)
	{
		fahr = (9.0/5.0) * celsius + 32;
		printf("%3.0f\t\t%6.1f\n", celsius, fahr);
	}
	return (0);
}
