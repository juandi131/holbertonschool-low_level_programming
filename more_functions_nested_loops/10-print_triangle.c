#include "main.h"

/**
 * print_triangle- Muchas gracias Palermo
 * @size: dasdsada
 * Return: claro que si
 */
void print_triangle(int size)
{
	int i;
	int n;
	int w;
	int x;
	int q;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
		{
			for (n = i; n > 1; n--)
			{
				w = 32;
				_putchar(w);
			}
			for (x = i; x <= size; x++)
			{
				q = 35;
				_putchar(q);
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
