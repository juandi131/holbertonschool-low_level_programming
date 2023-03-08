#include "main.h"
/**
 * _puts_rev_recursion- -
 * @s: -
 */
void _print_rev_recursion(char *s)
{
	if (s[0] == 0)
	{
		_putchar('\n');
	}
	else
	{
		_print_rev_recursion(&s[1]);
		_putchar(s[1]);
	}
}
