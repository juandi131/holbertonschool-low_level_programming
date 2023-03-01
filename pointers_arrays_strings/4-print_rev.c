#include "main.h"

/**
 * print_rev- MUCHAS GRACIAS PALERMO!!!!
 *@s: Lo que hiciste por boca no se olvida en la vida
 *
 */
void print_rev(char *s)
{
	int i;

	for (i = 255; s[i] != '0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

