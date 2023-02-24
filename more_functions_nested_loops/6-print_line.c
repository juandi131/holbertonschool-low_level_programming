#include "main.h"
/**
 *print_line- Muchas gracias palermo
 *@n: variable
 *
 */
void print_line(int n)
{
	int i;
	int p;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			p = 95;
			_putchar(p);
		}
	_putchar('\n');
	}
	else
		_putchar('\n');
}
