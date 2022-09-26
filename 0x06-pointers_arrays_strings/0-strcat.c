#include "main.h"

/**
 * *_strcat - concatenates @src to @dest
 *
 * @src: the source string
 * @dest: the destiation string
 *
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, len = 0;

	while (dest[i++])
		len++;
	for (i = 0; src[i]; i++)
		dest[len++] = src[i];
	return (dest);
}
