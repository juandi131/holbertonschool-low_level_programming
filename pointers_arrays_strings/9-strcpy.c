#include "main.h"
/**
 *_strcpy- Muchas gracias Palermo
 *@dest: Muchas gracias Palermo
 *@src: Muchas gracias Palermo
 *Return: Muchas gracias Palermo
 */
char *_strcpy(char *dest, char *src)
{
	int l;

	for (l = 0; src[l] != '\0'; l++)
	{
		dest[l] = src[l];
	}
	dest[l] = src[l];
	return (dest);
}	
