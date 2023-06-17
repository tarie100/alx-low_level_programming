#include<stdlib.h>
#include"main.h"
/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: ...
 * @new_size: ..
 * Return: q
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *q;
	unsigned int i, n = new_size;
	char *old = ptr;

	if (ptr == NULL)
	{
		q = malloc(new_size);
		return (q);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	q = malloc(new_size);
	if (q == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		n = old_size;
	}
	for (i = 0; i < n; i++)
	{
		q[i] = old[i];
	}
	free(ptr);
	return (q);
}
