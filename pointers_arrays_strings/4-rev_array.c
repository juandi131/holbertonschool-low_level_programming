#include "main.h"
/**
 * reverse_array- asdadsad
 * @a: adasdsa
 * @n: asqeedasaasdasdas
 */
void reverse_array(int *a, int n)
{
	int i;
	int no;
	int t;

	t = n - 1;
	i = 0;
	while (i <= t)
	{
		no = a[t];
		a[t] = a[i];
		a[i] = no;
		i++;
		t--;
	}
}
