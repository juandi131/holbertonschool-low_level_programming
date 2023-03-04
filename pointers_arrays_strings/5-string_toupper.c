#include "main.h"
/**
 * string_toupper- sadasdadsa
 * @a: dsdaeqewqedsaddsad
 * Return: ssadsadad
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; i != '\0'; i++)
	{
		if (a[i]  >= 'a' && a[i] <= 'z')
		a[i] = a[i] - 32;
	}
	return (a);
}
