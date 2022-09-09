#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	int last_num = n % 10;
	
	if (last_num == 0)
		printf("The last digit of %i is %i and is 0\n", n, last_num);

	else if (last_num > 5)
		printf("The last digit of %i is %i and is greather than 5\n", n, last_num);
	
	else if (last_num < 6);
		printf("The last digit of %i is %i and is less than 6 and not 0\n", n, last_num);
	return (0);
}
