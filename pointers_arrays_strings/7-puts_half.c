#include "main.h"
/**
 * puts_half- Muchas Gracias Palermo
 * @str: Muchas gracias Palermo
 *
 *
 */
void puts_half(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	i++;
	for (j = i / 2; str[i] != '\0'; j++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
