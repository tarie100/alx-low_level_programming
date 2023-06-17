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

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * max - min + sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	while (min <= max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
