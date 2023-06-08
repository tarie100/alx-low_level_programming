#include"main.h"
/**
 * is_prime_number - determines if a number is a prime number
 * @n: the number
 * Return: 0
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1 + is_prime_number(n - 1));
	return (0);
}
