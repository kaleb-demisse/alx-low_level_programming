#include "main.h"

/**
 * _strchr - search for a character within a string
 * @s: string to be searched
 * @c: the char  to be searched for
 *
 * Return: address to the first occurence of c or NULL if not found
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; ++i)
		if (*(s + i) == c)
			return (s + i);

	return (s + i);
}
