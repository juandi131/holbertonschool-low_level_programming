#include "main.h"
/**
 * print_alphabet_x10- Print the alphabet  in upercase.
 *
 * Return: Send when the programe succes
 */
void print_alphabet_x10(void)
{
	char n;
	int l;

	for (l = 0; l <= 9; l++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
