#include<stdlib.h>
#include<string.h>
#include"main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer containing contents of s1 &s2
 */
char *str_concat(char *s1, char *s2)
{
	int p = strlen(s1);
	int q = strlen(s2);
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ptr = malloc(sizeof(char) * p + q + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, s1);
	strcat(ptr, s2);
	return (ptr);
}
