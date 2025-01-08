#include <stdio.h>


double fahrenheit_to_celsius(double fahrenheit)
{
	return (fahrenheit - 32.0) * (5.0/9.0);
}

int main(void)
{
	printf("Enter temperature in Fahrenheit degree: ");
	double fahrenheit;
	scanf("%lf", &fahrenheit);
	printf("%.3lf Fahrenheit degrees is %.3lf Celsius degrees\n", fahrenheit, fahrenheit_to_celsius(fahrenheit));

	return 0;
}
