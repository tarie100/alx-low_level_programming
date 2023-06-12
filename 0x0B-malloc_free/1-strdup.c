#include<stdlib.h>
#include"main.h"
#include<string.h>
/**
 * _strdup - returns a copy of given string
 * @str: given string
 * Return: pointer to duplicate string
 */
char *_strdup(char *str)
{
	char *ptr;
	int p = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * (p + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, str);
	return (ptr);
}
