#include "main.h"

/**
 * print_sign- check the code.
 *
 * Return: Always 0.
 */

int print_sign(int n)
{
	int i;

	if (i > 0)
	{
	_putchar('+');
	return (1);
	}

	else if (i == 0)
	{
	_putchar('0');
	return (0);
	}

	else
	{
	_putchar('-');
	return (-1);
	}
}
