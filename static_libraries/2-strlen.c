#include "main.h"
/**
 *_strlen- Muchas gracias Palermo
 *@s: Punteros
 *Return: vos me digiste que si y no
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
