#include "main.h"

/**
 *_isdigit- esto es un digito
 *@c: variable
 *Return: 0 y 1
 */

int _isdigit(int c)
{
	for (c = 0; c <= 9; c++)
	{
		if (c >= 0 && c <= 9)
		{
			return (1);
		}
	else
	{
			return (0);
	}
	}
}
