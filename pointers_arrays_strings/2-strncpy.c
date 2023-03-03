#include "main.h"
/**
 **_strncpy- dadadasdasda
 *@n: adada
 *@src: asdda
 *@dest: sdadasd
 *Return: asdadas
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
