#include <stdio.h>
/**
 * main - this programe print numbers.
 *
 * Return: send 0 when this prgame ends
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	putchar('\n');
	return (0);
}
