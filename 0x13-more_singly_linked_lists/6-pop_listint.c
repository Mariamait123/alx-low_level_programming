#include "lists.h"
/**
  *pop_listint - function that deletes the head node
  *@head: input list
  *Return: head node’s data
  *returns 0 if head is null
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !*head)
		return (0);
	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (n);
}
