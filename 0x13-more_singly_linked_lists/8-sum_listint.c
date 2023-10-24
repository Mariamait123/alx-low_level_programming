#include "lists.h"
/**
  *sum_listint - finds the sum of input list
  *@head: input list
  *Return: the sum or 0 if head is null
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
