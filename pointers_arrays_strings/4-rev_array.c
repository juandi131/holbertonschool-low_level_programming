#include "main.h"
/**
 * reverse_array- asdadsad
 * @a: adasdsa
 * @n: asdasaa
 */
void reverse_array(int *a, int n)
{
	int i;
	int no;
	
	i = 0;
	while (i < n)
	{
		no = n;
		n = a[i];
		a[i] = no;
		i++;
		n--;
	}
}
