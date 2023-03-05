#include "main.h"
/**
 **cap_string- -
 *@a: -
 *Return: -
 */
char *cap_string(char *a)
{
	int i;

	i = 0;
	if (a[i] >= 'a' && a[i] <= 'z')
	{
		a[i] = a[i] - 32;
	}
	for (i = 0; a[i] != '\0'; i++)
	{
		if ((a[i] == '\n') || (a[i] == '\t') || (a[i] == ' ') || (a[i] == ',') ||
			(a[i] == ';') || (a[i] == '.') ||
			(a[i] == '!') || (a[i] == '?') || (a[i] == '"') ||
			(a[i] == '(') || (a[i] == ')') ||
			(a[i] == '{') || (a[i] == '}'))
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
			{
				a[i + 1] =  a[i + 1] - 32;
			}
		}
	}
	return (a);
}
