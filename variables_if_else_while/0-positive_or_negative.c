#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Identify the category of a number
 *
 * Return: send 0 when the program succes
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("is negative\n");
	}
	else if (n > 0)
	{
		printf("is positive\n");
	}
	else
	{
		printf("is zero\n");
	}
	return (0);

}
