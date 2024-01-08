#include "main.h"

/**
 * _memset - fills the first n bytes of a memory area
 *           with a constant byte
 * @s: pointer to the memory address to be filled
 * @b: the char  to be filled with
 * @n: number of bytes to be filled
 *
 * Return: address to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; ++i)
		*(s + i) = b;

	return (s);
}
