#include "main.h"

/**
 * _strncpy - entry point
 *
 * @dest: Destination string
 * @src: Source string
 *
 * @n: Bytes to copied from src.
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i++])
		j++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = j; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
