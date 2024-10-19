#include <stdio.h>

int	main(void)
{
	float	fahr;
	float	celsius;
	int		lower;
	int		upper;
	int		step;

	lower = 0;
	upper = 300;
	step = 20;

	printf("Celsius\t\tFahr\n");
	printf("----------------------\n");
	celsius = lower;
	while (celsius <= upper)
	{
		fahr = (9.0/5.0) * celsius + 32;
		printf("%3.0f\t\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
	return (0);
}
