#include "main.h"
/**
 * *_strncat- hola
 * @n: Muchas gracias Palermo
 * @dest: dest
 * @src: hola
 * Return: skay
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int v;
	int a;

	for (i = 0; dest[i] != '\0'; i++)
	{
		v = i;
	}
	a = 0;
	while (a <= n)
	{
		dest[v] = src[a];
		i++;
		a++;
	}
	return (dest);
}
