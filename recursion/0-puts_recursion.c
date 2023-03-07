#include "main.h"
/**
 *_puts_recursion- -
 *@s: -
 *Retunn: -
 */
void _puts_recursion(char *s)
{
	int i;
	
	if (s[0} == 0)
	{
		return;
	}
	else
	{
		_putchar(s[1]);
		_puts_recursion(&s[1]);
	}
	_putchar('\n');
}
