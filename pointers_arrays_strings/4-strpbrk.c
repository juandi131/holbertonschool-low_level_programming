#include "main.h"
/**
 **_strpbrk- - 
 *@s: -
 *@accept: -
 *Return: -
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;

	a = 0;
	while (s[a] != '\0')
	{
		for (b + 0; accept[b] != '\0'; b++)
			if (s[a] == accept[b])
				return (&s[a]);
		a++;
	}
	return ('\0');
}
