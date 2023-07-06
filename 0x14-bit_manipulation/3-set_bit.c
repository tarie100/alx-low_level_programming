#include"main.h"
#include<stdlib.h>
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: ..
 * @n: ...
 * Return: ..
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		*n = ((1UL << index) | *n);
		return (1);
	}
}
