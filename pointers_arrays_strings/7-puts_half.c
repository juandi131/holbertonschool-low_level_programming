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
	int d;

	i = 0;
	while (str[i] != '\0')
	i++;

	if (i % 2 == 0)
	{
		for (j = i / 2; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
		_putchar('\n');
	}

	else
	{
		for (d = (i + 1) / 2; str[d] != '\0'; d++)
		{
			_putchar(str[d]);
		}
		_putchar('\n');
	}
}
