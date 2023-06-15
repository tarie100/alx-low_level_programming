#include<stdlib.h>
#include"main.h"
#include<string.h>
/**
 * string_nconcat -  concatenates two strings
 * @s1: stringd 1
 * @s2: string 2
 * @n: bytes
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int s1_len = strlen(s1);
	unsigned int s2_len = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= s2_len)
	{
		n = s2_len;
	}
	ptr = malloc(s1_len + n + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memcpy(ptr, s1, s1_len);
	memcpy(ptr + s1_len, s2, n);
	ptr[s1_len + n] = '\0';
	return (ptr);
}
