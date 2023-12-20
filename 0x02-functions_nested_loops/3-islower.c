#include "main.h"

/**
 * _islower - checks if a char is a lowercase letter
 * @c: ascii of char to be checked
 *
 * Return: 1 if c is lowercase
 *         0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
