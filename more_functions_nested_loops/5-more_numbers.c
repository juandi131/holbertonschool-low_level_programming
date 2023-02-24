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

		for (i = 0; i <= 14 ; i++)
		{

			if (i > 9)
			{
				u = i / 10;
				_putchar(u + '0');
			}
			else
				n = i % 10;
			_putchar(n  + '0');

		}
		_putchar('\n');

}
