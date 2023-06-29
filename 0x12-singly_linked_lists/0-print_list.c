#include"lists.h"
#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
/**
 * size_t print_list -  prints all the elements of a list_t list
 * @h: pointer to the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%d]%s\n");
		}
		else
		{
			printf("[0] (nill)\n", h->len, h->str);
		}
		h = h->next;
		a++;
	}
	return (a);
}
