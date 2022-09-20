#include "main.h"

/**
 *more_numbers - entry point
 *
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int i, j = 10;
	

	for (i = 0; i <= 9; i++)
	{
		while (j <= 14)
		{
			if (j > 9)
			{
			char ones = (j % 10);
			char tens = (j / 10);
			
			j = ones + tens;
			_putchar (j);
			}

		_putchar(j);
		j++;
		}

	}
	_putchar('\n');
}
