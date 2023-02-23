#include "main.h"

/**
 *_isdigit- esto es un digito
 *@c: variable
 *Return: 0 y 1
 */

int _isdigit(int c)
{
	char c;
	if (c <= 9)
	{
		return (1);
	}
	else (c >= 32 && c <= 126) 
		return (0);
}
