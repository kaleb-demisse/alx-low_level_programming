#include "main.h"

/**
 * _strcat - concatenate a string on another string
 * @dest: the destination
 * @src: the source
 *
 * Return: pointer to the combined string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; *(dest + i) != '\0'; ++i)
		;
	for (j = 0; *(src + j) != '\0'; ++j, ++i)
		*(dest + i) = *(src + j);
	*(dest + i) = '\0';

	return (dest);
}
