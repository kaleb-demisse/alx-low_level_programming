#include "main.h"

/**
 * _atoi - convert a string into an int
 * @s: the string to be converted
 *
 * Return: the resulting integer
 */

int _atoi(char *s)
{
	int i, result = 0, sign = 1;

	for (i = 0; *(s + i) != '\0'; ++i)
	{
		if (*(s + i) == '-')
			sign *= -1;
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			for (; *(s + i) >= '0' && *(s + i) <= '9'; ++i)
				result = (result * 10) + (*(s + i) - '0');
			break;
		}
	}
	return (sign * result);
}
