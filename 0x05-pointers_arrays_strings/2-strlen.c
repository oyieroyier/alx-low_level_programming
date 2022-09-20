#include "main.h"

/**
 *
 * _stlen - returns the length of the string
 *
 * @s: the string to be checked
 *
 * Returns: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return(length);
}
