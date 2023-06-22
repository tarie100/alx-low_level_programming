#include"variadic_functions.h"
#include<stdarg.h>
#include<stddef.h>
#include<stdlib.h>
/**
 * sum_them_all - sums all its parameters
 * @n: 1st paraeter
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list args;

	va_start(args, n);
	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
