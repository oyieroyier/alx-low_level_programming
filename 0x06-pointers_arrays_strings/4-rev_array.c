#include "main.h"

/**
 * reverse_array - entry point.
 * @a: Array of ints to be reversed.
 * @n: Elements in array.
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (j = n - 1; j >= n / 2; j--)
	{
		i = a[n - 1 - j];
		a[n - 1 - j] = a[j];
		a[j] = i;
	}
}
