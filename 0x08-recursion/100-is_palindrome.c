#include"main.h"
#include<string.h>
/**
 * is_palindrome - checks  if a string is a palindrome
 * @s: the string
 * Return: 0
 */
int is_palindrome(char *s)
{
	char *p = 0;
	char *q = strlen(s);

	while (*s != '\0')
	{
		*q--;
	}
	q == p;
	if (*p == *s)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
