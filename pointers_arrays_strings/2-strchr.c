#include "main.h"
/**
 * *_strchr- -
 * @s: -
 * @c: --
 * Return: -
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&(s[i]));
		}
		else if (s[(i + 1)] == '\0')
		{
			return ('\0');
		}
	}
	return ('\0');
}
