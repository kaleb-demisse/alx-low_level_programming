#include "main.h"

/**
 * print_sign - checks if an integer is positive, negative or 0
 *              and print either +, - or 0 respectively
 * @n: the number to be checked
 *
 * Return: 1 if n is positive
 *         0 if n is 0
 *         -1 if n is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
