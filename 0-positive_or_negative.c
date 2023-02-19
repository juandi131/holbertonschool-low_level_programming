#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- Identify a random number in a category.
 *
 * Return: if the program succses return: 0.
 */
int main(void)
{
	int n;

	srad(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("is negative\n");
	}
	else
		if (n > 0)
	{
		printf("positive\n");
	}
	else
	{
		printf("is negative\n");
	}
	return (0);

}
