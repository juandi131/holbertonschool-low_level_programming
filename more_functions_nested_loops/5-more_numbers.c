#include "main.h"
/**
 *more_numbers(- Muchas gracias Palermo
 *
 *
 */
void more_numbers(void)
{

	int i;
	int u;
	int n;
	int p;

	for (p = 0; p <= 9; i++)
	{
		for (i = 0; i <= 14 ; i++)
		{
				if (i >  9)
			{
				u = i / 10;
				_putchar(u + '0');

			}
			n = i % 10;
			_putchar(n  + '0');
		}
	_putchar('\n');
	}
}
