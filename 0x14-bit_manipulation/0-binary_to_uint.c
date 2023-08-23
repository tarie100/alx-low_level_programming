#include"main.h"
#include<stdlib.h>
#include<string.h>
/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: pointer to a char
 * Return: conversion
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int output = 0;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		output = output * 2 + (b[i] - '0');
		}
	return (output);
}
