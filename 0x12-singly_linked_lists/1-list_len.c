#include "lists.h"
/**
 *list_len - Count the list lenght
 *@h: list
 *Return: value
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
