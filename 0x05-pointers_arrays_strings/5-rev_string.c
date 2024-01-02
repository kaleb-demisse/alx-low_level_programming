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
	char *temp;
	int count2;

	while (*s != '\0')
	{
		*temp = *s;
		s++;
		temp++;
		count++;
	}
	count2 = count;
	while (count-- != 0)
		s--;
	temp--;
	while (count2-- != 0)
	{
		*s = *temp;
		s++;
		temp--;
	}
	*s = *temp;
}
