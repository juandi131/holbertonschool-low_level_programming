#include "main.h"
/**
 * *_strncat- hola
 * @n: Muchas gracias Palermo
 * @dest: dest
 * @src: holasdasd:
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
	
	while (a < n)
	{
		dest[v] = src[a];
		v++;
		a++;
	}
	if (n > v)
	{
		dest[v + 1] = '\0';
	return (dest);
	}
	else 
	return (dest);
}
