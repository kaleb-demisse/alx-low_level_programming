#include "main.h"

/**
 * _pow_recursion - calculate power using recursion
 * @x: the base
 * @y: the power
 *
 * Return: the result if y is postive or -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * (_pow_recursion(x, (y - 1))));
}
