#include <stdlib.h>
#include "main.h"

/**
 * _strdup - return a duplicate of a given string
 * @str: the string to be copied
 *
 * Return: a pointer to the copy or NULL
 */

char *_strdup(char *str)
{
	char *new = NULL;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; ++i)
		;
	new = (char *)malloc(i);

	if (new == NULL)
		return (NULL);
	for (; i > -1; --i)
		*(new + i) = *(str + i);
	return (new);
}
