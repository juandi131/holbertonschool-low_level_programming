#include "main.h"
/**
 * _sqrt_recursion- Returns the natural square root of a number.
 * @n: Variable
 * Return: This an int.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (creayrecursa(1, n));
	}
}
/**
 * creayrecursa- this functions creates a variable.
 *@b:  This is a variable
 *@n: This is a variable.
 *Return:  returns  a int
 */

int creayrecursa(int b, int n)
{
	if (b * b == n)
	{
		return (b);
	}
	else if	(b < n)
	{
		return (creayrecursa(b + 1, n));
	}
	else
	{
		return (-1);

	}
}
