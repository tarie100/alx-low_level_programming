#include"main.h"
#include<stdlib.h>
/**
 * malloc_checked -  allocates memory using malloc
 * @b: parameter
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
