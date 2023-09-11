#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int value;
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);
    value = 42;
    linear_search(array, size, value);
    
    return (EXIT_SUCCESS);
}