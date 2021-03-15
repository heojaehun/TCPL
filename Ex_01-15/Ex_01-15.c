#include <stdio.h>

float fhar_to_cels(float fahr);

int main()
{
	float fahr, celsious;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("fahr  celsius\n");

	while (fahr <= upper) {
        celsious = fhar_to_cels(fahr);
		printf("%3.0f %7.1f\n", fahr, celsious);
		fahr = fahr + step;
	}
}

float fhar_to_cels(float fahr)
{
	return (5.0/9.0) * (fahr-32.0);
}
