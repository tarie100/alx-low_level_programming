#include"search_algos.h"
/**
 * jump_search -  searches for a value in a sorted array
 * @array: the array
 * @size: size of array
 * @value: the value
 * Return: the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	int step, prev;

	if (array == NULL)
	{
		return (-1);
	}
	step = sqrt(size);
	prev = 0;
	while (array[(int)fmin(step, (int)size) - 1] < value)
	{
		prev = step;
		step += sqrt(size);
		if (prev >= (int)size)
		{
			return (-1);
		}
	}
	while (array[prev] < value)
	{
		prev++;
		if (prev == fmin(step, (int)size))
		{
			return (-1);
		}
	}
	if (array[prev] == value)
	{
		return (prev);
	}
	return (-1);
}
