#include<stdlib.h>
#include"main.h"
/**
 * array_range - creates an array of integers
 * @min: 1st parameter
 * @max: 2nd parameter
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *array;
	int i;
	int size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		array[i] = min++;
	}
	return (array);
}
