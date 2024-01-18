#include"search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers using the Binary search algorithm
 * @array: the array
 * @size: size of array
 * @value: the value
 * Return: index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int left, right, mid, i;

	if (array == NULL)
	{
		return (-1);
	}
	left = 0;
	right = size - 1;
	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching subarray: ");
		for (i = left; i <= right; i++)
		{
			printf("%d ", array[i]);
		}
		printf("\n");
		if (array[mid] == value)
		{
			return mid;
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
