#include "main.h"

/**
 *_isdigit- esto es un digito
 *@c: variable
 *Return: 0 y 1
 */

int _isdigit(int c)
{

	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
		return (0);
}
