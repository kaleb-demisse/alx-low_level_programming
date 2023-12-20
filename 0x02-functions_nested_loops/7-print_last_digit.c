#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: the number to be used
 *
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		if (n < -10)
			n %= 10;
		n = 10 - n;
	}

	last = n % 10;
	_putchar(last + '0');
	return (last);
}
