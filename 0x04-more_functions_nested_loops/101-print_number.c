#include "main.h"

/**
 * print_number - print number
 * @n: number to be printed
 *
 * Return: nothing
 */

void print_number(int n)
{
	if (n / 10 != 0)
		print_number(n / 10);
	else if (n < 0)
		_putchar('-');
	if (n >= 0)
		_putchar((n % 10) + 48);
	else
		_putchar((-(n % 10)) + 48);
}
