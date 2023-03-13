#include "main.h"
/**
 * _strcmp- asasdasd
 * @s1: sadasd
 * @s2: ssd
 * Return: dasdasdsa
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int a;

	a = 0;
	i = 0;
	while (s1[i] != '\0' && a == 0)
	{
		a = s1[i] - s2[i];
		i++;
	}
	return (a);
}
