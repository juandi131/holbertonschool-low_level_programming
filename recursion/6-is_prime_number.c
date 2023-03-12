#include "main.h"
/**
 *is_prime_number- Find the primes
 *@n: This is the imput
 *Return: Returns 1 if is a prime.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);

	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		return (encuentra_los_primos(2, n));
	}
}
/**
 *encuentra_los_primos- auxiliar function
 *@b: This is a variable.
 *@n: this is a variable
 *Return: Returns a variable.
 */
int encuentra_los_primos(int b, int n)
{
	if (n % b == 0)
	{
		return (0);
	}
	else if (b < n - 1)
	{
		return (encuentra_los_primos(b + 1, n));
	}
	else
	{
		return (1);
	}
}
