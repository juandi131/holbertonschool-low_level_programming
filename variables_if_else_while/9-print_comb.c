#include <stdio.h>
/**
 * main - this programe prints numbers.
 *
 * Return: this programe send 0 when ends.
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
