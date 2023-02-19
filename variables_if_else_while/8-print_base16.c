#include <stdio.h>
/**
 * main - This programe worcs
 *
 * Return: send 0
 */

int main(void)
{
	int n;
	char l;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
