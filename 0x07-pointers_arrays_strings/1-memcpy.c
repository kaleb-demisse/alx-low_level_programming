#include "main.h"

/**
 * _memcpy - copy memory address from src to dest
 * @src: the source
 * @dest: the dest
 * @n: number of bytes to copy
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

        for (; i < n; ++i)
                *(dest + i) = *(src + i);

        return (dest);
}
