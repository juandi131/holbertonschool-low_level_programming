#include "main.h"
/**
 * _strcat- Hola
 *@dest: Hola
 *@src: Hola
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;
	int c;

	for (a = 0; dest[a] != '\0'; a++)
	{
		c = a + 1;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[c] = src[b];
		b++;
		c++;
	}
	return (dest);
}
