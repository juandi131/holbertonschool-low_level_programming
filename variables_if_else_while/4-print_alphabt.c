#include <stdio.h>
/**
 * main - This programe print the alphabet.
 *
 * Return: send 0 when the programe corectly ends.
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'q' && n != 'e')
			putchar(n);
	}
	putchar('\n');
	return (0);
}
