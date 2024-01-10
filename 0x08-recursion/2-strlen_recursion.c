#include "main.h"

/**
 * _strlen_recursion - count length  of string recursively
 * @s: the string to be counted
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}
