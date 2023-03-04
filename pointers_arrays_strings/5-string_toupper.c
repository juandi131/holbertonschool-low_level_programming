#include "main.h"
/**
 * string_toupper- sadasdadsa
 * @a: dsdaeqewqedsaddsad
 * Return: ssadsadad
 */
char *string_toupper(char *a)
{
	int i;
	
	i = 0;
	while (i != '\0')
	{
		if (a[i]  >= 'a' && a[i] <= 'z')
			a[i] = a[i] - 32;
			i++;
	}
	return (a);
}
