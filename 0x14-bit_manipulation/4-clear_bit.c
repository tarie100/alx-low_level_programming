#include"main.h"
#include<stdlib.h>
/**
 * clear_bit -  sets the value of a bit to 0 at a given index
 * @index: ..
 * @n: ..
 * Return: ..
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	else
	{
		*n &= ~(1UL << index);
		return (1);
	}
}

