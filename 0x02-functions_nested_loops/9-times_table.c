#include "main.h"

/**
 * times_table - print time table
 *
 * Return: nothing
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a < 10; ++a)
	{
		for (b = 0; b < 10; ++b)
		{
			c = a * b;
			if (c > 10)
				_putchar((c / 10) + 48);
			else if (b != 0)
				_putchar(' ');
			_putchar((c % 10) + 48);
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
