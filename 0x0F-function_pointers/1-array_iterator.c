#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * @array: the integer array
 * @size: size of the array
 * @action: int element
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL || action == NULL)
{
	return;
}
for ( i = 0; i < size; i++)
{
action(array[i]);
}
}
