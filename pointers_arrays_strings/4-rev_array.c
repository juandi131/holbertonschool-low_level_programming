#include "main.h"
/**
 * reverse_array- asdadsad
 * @a: adasdsa
 * @n: asdasaasdasdas
 */
void reverse_array(int *a, int n)
{
	int i;
	int no;
	int t;

	t = n;
	i = 0;
	while (i < t)
	{
		no = a[t];
		a[t] = a[i];
		a[i] = no;
		i++;
		t--;
	}
}
