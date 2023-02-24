#include "main.h"
/**
 *more_numbers(- Muchas gracias Palermo
 *
 *
 */
void more_numbers(void)
{
	int w;	
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (i = 0; i <= 9; i++)
		{
			_putchar(i + '0');
	 	}
		w = 1;
		for (i = 0; i <= 4; i++)    
		{
			 _putchar(i + '0');
			 _putchar(w + '0');
		}
	}	
	_putchar('\n');
}
