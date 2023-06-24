#include "monty.h"
/**
* push - that push at top
* @stack: pointer to stack
* @line_number: giver number of line
*/
void push(stack_t **stack, unsigned int line_number)
{
	char *value = NULL;

	value = strtok(NULL, " ");
	if (value && isinteger(value))
	{
		var1.val_read = atoi(value);
		if (!strcmp(var1.type, "queue"))
		{
			if (!pushqueue(stack, var1.val_read))
				error_memory(stack, line_number);
		}
		else
		{
			if (!pushstack(stack, var1.val_read))
				error_memory(stack, line_number);
		}
	}
	else
		error_push(stack, line_number);
}

/**
* pall - that gives pall
* @stack: pointer to stack
* @line_number: giver number of line
*/
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack;
	(void)line_number;

	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
	}
}

/**
* pint - that prints the top of stack
* @stack: pointer to stack
* @line_number: giver number of line
*/
void pint(stack_t **stack, unsigned int line_number)
{
	if (!(*stack))
		error_pint(stack, line_number);
	printf("%d\n", (*stack)->n);
}

/**
* pop - that delete the top of stack
* @stack: pointer to stack
* @line_number: giver number of line
*/
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;

	if (!(*stack))
		error_pop(stack, line_number);
	if (!(*stack)->next)
	{
		free(*stack);
		*stack = NULL;
		return;
	}
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(tmp);
}

/**
* swap - that do swap of two top
* @stack: pointer to stack
* @line_number: giver number of line
*/
void swap(stack_t **stack, unsigned int line_number)
{
	int tmp;

	if (!((*stack) && (*stack)->next))
		error_swap(stack, line_number);
	tmp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = tmp;
}
