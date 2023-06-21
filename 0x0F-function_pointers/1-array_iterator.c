#include<stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - iterates on each elementof an array.
 * @size: size of array
 * @array: pointer to array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
