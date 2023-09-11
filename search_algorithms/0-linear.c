#include "search_algos.h"
/**
* linear_search - this function is a linear serch
* @array: this is an array of ints.
* @size: this is the size of the array
* @value: This is the value
* Return: Return -1 if it falirs
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);
	while (i < size)
	{
		if (array[i] != value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		}
		else if (array[i] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			return (i);
		}
		i++;
	}
	return (-1);
}
