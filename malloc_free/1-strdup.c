#include "main.h"
#include <stdi.h>
#include <stdlib.h>
/**
 * *_strdup- -
 * @str: -
 *Return: -
 */
char *_strdup(char *str)
{
	int a;

	int i;
	char *st;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	st = malloc(i * sizeof(char));
	if (st == NULL)
	{
		return (NULL);
	}
	for (a = 0; a <= i; a++)
	{
		st[a] = str[a];
	}
	return (st);
}
