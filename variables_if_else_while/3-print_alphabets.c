#include <stdio.h>
/**
 * main - Print the alphabet  in upercase.
 *
 * Return: Send when the programe succes
 */
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	for (n = 'A'; n <= 'Z'; n++)
	{
		putchar(n);
	}
	putchar	('\n');
	return (0);
}
