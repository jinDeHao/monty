#include "monty.h"

/**
 * pushstack - add node at first
 * @head: pinter to address of head of list
 * @n: the value of the elment
 * Return: the head of list
*/
stack_t *pushstack(stack_t **head, int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (NULL);
	while (*head && (*head)->prev)
		*head = (*head)->prev;

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (*head);
}


/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to head
*/
void free_dlistint(stack_t *head)
{
	stack_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
