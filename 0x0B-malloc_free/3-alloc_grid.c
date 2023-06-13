#include<stdlib.h>
#include"main.h"
/**
 * alloc_grid - returns a pointer to a  2 dimensional array of integers.
 * @width: parameter 1
 * @height: parameter 2
 * Return: pointer to a 2D array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (j = 0; j < height; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}
	}
	return (ptr);
}
