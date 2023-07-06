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
	unsigned int b_len = strlen(b);
	unsigned int output = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; i < b_len; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		output = output * 2 + (b[i] - '0');
		}
	return (output);
}
