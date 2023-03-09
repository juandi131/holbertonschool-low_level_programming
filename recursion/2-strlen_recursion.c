#include "main.h"
/**
 *_strlen_recursion- This funtions return the legntoh of the string
 *@s: This is a varable
 *Return: The return return the lengh of a string.
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
	{
		return (s[0]);
	}
	else
	{
		return (1 + _strlen_recursion(&s[1]));
	}
}
