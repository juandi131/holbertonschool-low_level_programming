#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  *create_array- Create an array with Malloc
 *  @size: Is the sixe of this array
 *  @c: this is the content.
 * Return: This return returns a char.
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}

	ar = malloc(size * sizeof(char));

	else if (ar == '\0')
	{
		return (NULL);
	}
	else
		for (i = 0; i <= size; i++)
		{
			ar[i] = c;
		}
	return (ar);
}
