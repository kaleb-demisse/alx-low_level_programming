#include "main.h"

/**
 * puts2 - print every second character of a string
 * @str: the string to be printed
 *
 * Return: nothing
 */

void puts2(char *str)
{
	while (1)
	{
		_putchar(*str);
		if (*(str + 1) == '\0' || *(str + 2) == '\0')
			break;
		str += 2;
	}
	_putchar('\n');
}
