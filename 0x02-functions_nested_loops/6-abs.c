#include "main.h"

/**
 * _abs - Entry point
 * @n: an integer
 * Return: int
 */

int _abs(int n)
{
	if (n > 0)
	{
		return(n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}

