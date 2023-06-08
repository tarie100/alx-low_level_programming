#include"main.h"
int is_prime_helper(int n, int i);
/**
 * is_prime_number - determines if a number is a prime number
 * @n: the number
 * Return: 0
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 1));
}
/**
* is_prime_helper - recurses
* @n: the number
* @i: index
* Return: 0
*/
int is_prime_helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) > i)
	{
		return (1);
	}
	return (is_prime_helper(n, i + 1));
}
