#include "main.h"

/**
 * swap_int- Muchas gracias Palermo
 * @a: variable
 * @b: variable
 */
void swap_int(int *a, int *b)
{
	int c;

	*a = 1;
	*b = 2;
	c = *b;
	*b = *a;
	*b = c;

}
