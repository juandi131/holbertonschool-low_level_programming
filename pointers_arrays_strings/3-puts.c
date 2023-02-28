#include "main.h"
/**
 * _puts- Muchas gracias Palermo
 * @str: Muchas gracias Palermo
 *
 */
void _puts(char *str)
{
	char c;

	for (c = 0; str[c] != '\0'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
