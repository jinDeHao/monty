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
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (*head);
}


/**
 * pushqueue - adds a new node at the end
 * @n: value
 * @head: point to head
 * Return: the new list
*/
stack_t *pushqueue(stack_t **head, int n)
{
	stack_t *tmp, *reset = *head, *new = malloc(sizeof(stack_t));

	if (!new)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (!(*head))
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}
	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
	}
	tmp->next = new;
	new->prev = tmp;
	*head = reset;
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
