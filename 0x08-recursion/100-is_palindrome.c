#include"main.h"
#include<string.h>
/**
 * is_palindrome - checks  if a string is a palindrome
 * @s: the string
 * Return: 0
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (compare(s, 0, _strlen_recursion(s)));
}
/**
 *  _strlen_recursion - returns the length of a string
 *  @s: the string
 *  Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
/**
 * compare - compares each character
 * @s: the string
 * @n1: smallest index
 * @n2: biggest index
 * Return: 0
 */
int compare(char *s, int n1, int n2)
{
	if (*(s + n1) != *(s + n2 - 1))
	{
		return (0);
	}
	if (n1 >= n2)
	{
		return (1);
	}
	return (compare(s, n1 + 1, n2 - 1));
}
