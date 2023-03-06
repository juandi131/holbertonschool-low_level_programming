#include "main.h"
/**
 *
 *
 *
 */
char *_strchr(char *s, char c);
{
	int i

	for (i = 0; i != '\0'; i++)
	{
		if (c == s[i])
		{
			return (s[i]);
		}	
		else if (s[i + 1] == '\0')
		{
			return ('\0');
		}
	}
}
