#include"main.h"
int sqrt_aid(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_aid(n, 0));
}
/**
 * sqrt_aid - recurses to find the sqrt
 * @n: the number
 * @i: index
 * Return: sqrt
 */
int sqrt_aid(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_aid(n, i + 1));
}
