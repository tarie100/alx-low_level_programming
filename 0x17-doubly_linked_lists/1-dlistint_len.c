#include"lists.h"
/**
 * listint_len -  returns the number of elements in a linked dlistint_t list.
 * @h: counter
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h->prev != NULL)
	{
		h = h->prev;
	}
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
