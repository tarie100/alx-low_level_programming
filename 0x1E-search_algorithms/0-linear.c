#include"search_algos.h"
/**
 * linear_search - searches for a value in an array of integers using the Linear search algorithm
 * @array: the array
 * @size: elements in array
 * @value: the value
 * Return: 1st index
 */
int linear_search(int *array, size_t size, int value)
{
        size_t i;

        if (array == NULL)
        {
                return (-1);
        }
        for (i = 0; i < size; i++)
        {
                if (array[i] == value)
                {
                        return (i);
                }
        }
        return (-1);
}
