#include "main.h"

/**
 *_alpha - check the code.
 *@c: the integer value it receives
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
	return (1);

	else
	return (0);
}
