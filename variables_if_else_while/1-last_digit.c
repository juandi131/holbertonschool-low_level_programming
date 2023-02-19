#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Identify the category of a number
 *
 * Return: send 0 when the program succes
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	l = n % 10;

	if (l > 5)
	{
		printf("%d and is greather than 5\n", l);
	}
	else if (l == 0)
	{
		printf("%d and is 0\n", l);
	}
	else
	{
		printf("%d and is less 6 and 0\n", l);
	}
	return (0);
}
