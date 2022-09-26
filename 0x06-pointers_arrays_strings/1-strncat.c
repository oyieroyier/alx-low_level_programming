#include "main.h"

/**
 * _strncat - Concatenates two strings
 *
 * @dest: Destination string
 *
 * @src: Source string.
 *
 * @n: Bytes
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[j++] = src[i];
	return (dest);
}
