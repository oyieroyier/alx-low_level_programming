#include "main.h"

/**
 * main - Entry point
 *
 *Description - Prints the alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void) /*prints the alphabet*/
{
int i;

for (i = 'a'; i <= 'z'; i++)
	{
	_putchar(i);
	}
_putchar('\n');
}

