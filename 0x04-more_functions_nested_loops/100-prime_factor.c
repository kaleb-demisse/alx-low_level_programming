#include <stdio.h>
#include <math.h>

/**
 * main - print the largest prime factor of 612852475143
 *
 * Return: always 0
 */

int main(void)
{
	long int number, i;

	number = 612852475143;

	for (i = 2; i <= sqrt(number); ++i)
		if (number % i == 0)
			number /= i;
	printf("%ld\n", number);
	return (0);
}
