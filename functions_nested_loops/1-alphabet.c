#include "main.h"
/**
 *  print_alphabet - Print the alphabet  in upercase.
 *
 * Return: Send when the programe succes
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
