#include "main.h"
/**
 * print_diagonal- Muchas gracias palermo
 *@n: variable
 *
 */
void print_diagonal(int n)
{
	int i;
	int b;
	int s;
	int d;

	if (n >  0)
	{
		for (d = 0; d < n; d++)
		{
			for (i = 0; i < d; i++)
			{
				s = 32;
				_putchar(s);
			}
			b = 92;
			_putchar(b);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
