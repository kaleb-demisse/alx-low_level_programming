#include "main.h"

/**
 * _isalpha - checks if a char is a letter
 * @c: ascii of char to be checked
 *
 * Return: 1 if c is letter
 *         0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
