#include <stdio.h>
/**
 * print_array- mUCHAS GRACIAS PALERMO!!
 * @a: Lo que hiciste por boca no se olvida en la vida.
 * @n: No se olvida en la vida
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		if (c == n - 1)
			printf("%d", a[c]);

		else
			printf("%d, ", a[c]);
	}
		printf("\n");
}
