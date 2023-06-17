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
	array = (int *) malloc(sizeof(int) * max - min + 1);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
