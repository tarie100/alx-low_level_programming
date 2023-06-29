#include"lists.h"
#include<stdio.h>
#include<stddef.h>
/**
 * list_len - returns number of elements
 * @h: pointer to list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		h = h->next;
		a++;
	}
	return (a);
}
