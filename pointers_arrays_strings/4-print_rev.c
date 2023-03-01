#include "main.h"

/**
 * print_rev- MUCHAS GRACIAS PALERMO!!!!
 * @s: Lo que hiciste por boca no se olvida en la vida
 *
 */
void print_rev(char *s)
{
	int i;
	int y;

	y = 0;
	while (s[y] != '\0')
		y++;
	for (i = y - 1; i >= 0; i--)
		{
		_putchar(s[i]);
		}
	_putchar('\n');
}
