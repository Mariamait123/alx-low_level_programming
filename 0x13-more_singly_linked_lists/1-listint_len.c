#include "lists.h"
/**
  *listint_len - function that returns the number of elements
  *@h: input
  *Return: number of elements
  */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}
	return (a);
}
