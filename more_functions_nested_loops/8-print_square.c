#include "main.h"

/**
 * print_square- Muchas gracias Palermo
 * @size: variable
 */
void print_square(int size)
{
	int i;
	int d;
	int w;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (d = 0; d < size; d++)
			{
				w = 35;
				_putchar(w);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
