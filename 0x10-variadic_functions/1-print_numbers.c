#include"variadic_functions.h"
#include<stdarg.h>
#include<stddef.h>
#include<stdio.h>
#include<stdlib.h>
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of int passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int num;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
