#include "monty.h"
/**
* mod - that gives modulo
* @stack: pointer to stack
* @line_number: giver number of line
*/
void mod(stack_t **stack, unsigned int line_number)
{
	if (!((*stack) && (*stack)->next))
		error_mod(stack, line_number);
	if ((*stack)->n == 0)
		error_math(stack, line_number);
	(*stack)->next->n %= (*stack)->n;
	pop(stack, line_number);
}

/**
* pchar - that print a char at the top of stack
* @stack: pointer to stack
* @line_number: giver number of line
*/
void pchar(stack_t **stack, unsigned int line_number)
{
	if (!(*stack))
		error_pchar_empty(stack, line_number);
	if ((*stack)->n > 127 || (*stack)->n < 0)
		error_not_char(stack, line_number);
	printf("%c\n", (*stack)->n);
}

/**
 * pstr - print a sting from code ascii
 * @stack: pointer to stack
 * @line_number: giver number of line
*/
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *node = *stack;
	(void)line_number;

	while (node)
	{
		if (node->n > 127 || node->n <= 0)
			break;
		printf("%c", node->n);
		node = node->next;
	}
	printf("\n");
}

/**
 * rotl - rotates the stack to the top.
 * @stack: pointer to stack
 * @line_number: giver number of line
*/
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int top;
	(void)line_number;

	while (tmp)
	{
		if (!tmp->prev)
			top = tmp->n;
		else if (!tmp->next)
		{
			tmp->prev->n = tmp->n;
			tmp->n = top;
		}
		else
			tmp->prev->n = tmp->n;
		tmp = tmp->next;
	}
}
