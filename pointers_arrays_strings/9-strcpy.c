#include "main.h"
/**
 *
 *
 *
 */
char *_strcpy(char *dest, char *src)
{
	int l;

	for (l = 0; src[l] != '\0'; l++)
	{
		dest[l] = src[l];
	}
	dest[l] = src[l];
}	
