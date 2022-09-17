#include "main.h"

/**
 * print_line - entry point
 *
 * @n: length of line
 *
 * Return: Always 0
 */

void print_line(int n)
{
	int i;

	while (i == n)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else
		{
			continue;
		}
	_putchar('\n');
}
}