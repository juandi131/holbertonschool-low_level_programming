#include "main.h"
/**
 * factorial- This function do factorial operations.
 * @n: This is a variable.
 * Return: Return a int.
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	
	else
	{
		return (n * factorial(n - 1));
	}
}
