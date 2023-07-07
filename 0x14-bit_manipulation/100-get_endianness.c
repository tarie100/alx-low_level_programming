#include"main.h"
#include<stdlib.h>
/**
 * get_endianness - checks for an endianess
 * Return: ..
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *p = (char *) &a;

	return ((int) *p);
}
