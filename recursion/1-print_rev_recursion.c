#include "main.h"
/**
 *
 *
 *
 */
void _puts_recursion(char *s)
{
	if (s[0] == 0)
	{
		_putchar('\n');
	}
	else
	{
		_puts_recusion(&s[1])
		_putchar(s[1]);
	}
}
