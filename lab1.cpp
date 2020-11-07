#include <stdio.h>
#define CRT_SECURE_NO_WARNINGS

#define COUNT 10

int main(int argc, char** argv)
{

	double min_decimal = 1.0;
	double min = 0;
	for (int i = 0; i < COUNT; ++i) {

		double n;
		printf("Enter number: ");
		scanf_s("%lf", &n);

		double decimal = n - (long)(n);

		if (min_decimal > decimal) {
			min = n;
			min_decimal = decimal;
		}
	}

	printf("Min number = %lf", min);

	return 0;
}