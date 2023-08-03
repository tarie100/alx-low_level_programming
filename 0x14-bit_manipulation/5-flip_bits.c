#include"main.h"
#include<stdio.h>
/**
 * flip_bits - returns the number of bits neeeded to flip
 * @n: num 1
 * @m: num 2
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int current, XOR = n ^ m;
	unsigned int i, count = 0;

	for (i = 63; i < 64; i--)
	{
		current = XOR >> i;
		if (current & 1)
		{
			count++;
		}
	}
	return (count);
}
