#include "main.h"

/**
 * puts_half - print the latter half string
 * @str: the string to be printed
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int count, temp, count2 = 0;

	while (*str != '\0')
	{
		count2++;
		str++;
	}
	count = count2;
	while (count2 != 0)
	{
		str--;
		count2--;
	}
	temp = (count % 2) ? (count + 1) / 2 : count / 2;
	while (count2 <= count)
	{
		if (count2 >= temp)
		{
			while (*str != '\0')
			{
				_putchar(*str);
				str++;
				count2++;
			}
			_putchar('\n');
		}
		count2++;
		str++;
	}
}
