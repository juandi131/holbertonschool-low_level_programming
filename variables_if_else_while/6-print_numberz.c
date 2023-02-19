#include <stdio.h>
/**
 * main - This programe print numbers
 *
 * Return: When the programe ends send 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
	}
	putchar('\n');
	return (0);
}
