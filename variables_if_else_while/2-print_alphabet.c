#include <stdio.h>
/**
 * main - print de alphabet
 *
 * Return: send 0 when the program succes
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
