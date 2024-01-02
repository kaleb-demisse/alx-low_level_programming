#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string to be reversed
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	while (count != -1)
	{
		_putchar(*s);
		s--;
		count--;
	}
	_putchar('\n');
}
