#include "main.h"
/**
 *_puts_recursion- This function prints the content of a string in reverse
 *@s: This is a array 
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(&s[1]);
	}
}
