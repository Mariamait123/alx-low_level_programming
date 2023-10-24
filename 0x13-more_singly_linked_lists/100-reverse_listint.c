#include "lists.h"
/**
  *reverse_listint - function that reverses a listint_t
  *@head: input lists
  *Return: new reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *h = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = h;
		 h = *head;
		 *head = next;
	}
	*head = h;
	return (*head);
}
