#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * strtow - split string into words
 * @str: string
 *
 * Return: string pointer or NULL
 */
char **strtow(char *str)
{
	int wc = 0, i = 0, j = 0, k, wlen;
	char **newStr, *temp;

	if (str == NULL || !*str)
		return (NULL);
	while (*(str + i))
	{
		if (*(str + i) != ' ')
			if (*(str + i + 1) == ' ' || *(str + i + 1) == '\0')
				wc++;
		++i; }
	if (wc == 0)
		return (NULL);
	newStr = malloc(++wc  * sizeof(char *));
	if (newStr == NULL)
		return (NULL);
	while (*str)
	{
		while (*str == ' ' && *str)
			++str;
		wlen = 0;
		while (*(str + wlen) != ' ' && *(str + wlen))
			++wlen;
		temp = malloc((wlen + 1) * sizeof(char));
		if (temp == NULL)
		{
			for (; j - 1 >= 0; j--)
				free(newStr[j]);
			free(newStr);
			return (NULL); }
		for (k = 0; k < wlen; ++k)
			*(temp + k) = *str++;
		*(temp + k) = '\0';
		*(newStr + j) = temp;
		if (j < wc - 1)
			j++; }
	*(newStr + j) = NULL;
	return (newStr);
}
