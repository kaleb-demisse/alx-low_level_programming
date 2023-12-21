#include "main.h"

/**
 * _isupper - checks if a char is an uppercase letter
 * @c: ascii of char to be checked
 *
 * Return: 1 if c is uppercase
 *         0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
