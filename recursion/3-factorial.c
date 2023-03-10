#include "main.h"
/**
 * factorial- This function do factorial operations.
 * @n: This is a variable.
 * Return: Return a int.
 */
int factorial(int n)
{
	if (n <= 1)
	{
		return (n);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
