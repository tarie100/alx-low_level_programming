#include"main.h"
#include<stdlib.h>
/**
 * *create_array - creates an array
 * @size: size of array
 * @c: initialised character
 * Return: character
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
}
