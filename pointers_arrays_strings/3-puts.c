#include "main.h"
/**
 * _puts- Muchas gracias Palermo
 * @str: Muchas gracias Palermo
 *
 */
void _puts(char *str)
{
	int c;

	for (c = 0; str[c] != str['\0']; c++)
	{

		_putchar(str[c]);
	}
	_putchar('\n');
}
