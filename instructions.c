#include "monty.h"
int snprintf(char *str, size_t size, const char *format, ...);

void push(stack_t **stack, unsigned int line_number)
{
	char *value = NULL;

	value = strtok(NULL, " ");
	if (value && isinteger(value))
	{
		var1.val_read = atoi(value);
		if (!pushstack(stack, var1.val_read))
		{
			fprintf(stderr, "Error: malloc failed\n");
			fclose(var1.file_read);
			free_dlistint(*stack);
			exit(EXIT_FAILURE);
		}
	}
	else
		error_push(stack, line_number);
}



void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack;
	char buffer[100];
	int len;
	(void)line_number;

	while (node)
	{
		len = snprintf(buffer, sizeof(buffer), "%d\n", node->n);
		write(STDOUT_FILENO, buffer, len);
		node = node->next;
	}
	return;
}

void pint(stack_t **stack, unsigned int line_number)
{
	if (!(*stack))
		error_pint(stack, line_number);
	printf("%d\n", (*stack)->n);
}

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


void swap(stack_t **stack, unsigned int line_number)
{
	int tmp;

	if (!((*stack) && (*stack)->next))
		error_swap(stack, line_number);
	tmp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = tmp;
}
