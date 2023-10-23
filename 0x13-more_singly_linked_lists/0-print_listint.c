#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
  *print_listint - prits all elemnts
  *@h: input listint_t
  *Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	int a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		a++;
		h = h->next;
	}
	return (a);
}
