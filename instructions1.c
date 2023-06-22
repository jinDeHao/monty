#include "monty.h"

/**
* add - that gives addition
* @stack: pointer to stack
* @line_number: giver number of line
*/
void add(stack_t **stack, unsigned int line_number)
{
	if (!((*stack) && (*stack)->next))
		error_add(stack, line_number);
	(*stack)->next->n += (*stack)->n;
	pop(stack, line_number);
}

/**
* nop - that gives nothing
* @stack: pointer to stack
* @line_number: giver number of line
*/
void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}

/**
* sub - that gives subtracktion
* @stack: pointer to stack
* @line_number: giver number of line
*/
void sub(stack_t **stack, unsigned int line_number)
{
	if (!((*stack) && (*stack)->next))
		error_sub(stack, line_number);
	(*stack)->next->n -= (*stack)->n;
	pop(stack, line_number);
}

/**
* mul - that gives multiplication
* @stack: pointer to stack
* @line_number: giver number of line
*/
void mul(stack_t **stack, unsigned int line_number)
{
	if (!((*stack) && (*stack)->next))
		error_mul(stack, line_number);
	(*stack)->next->n *= (*stack)->n;
	pop(stack, line_number);
}

/**
* _div - that gives divesion
* @stack: pointer to stack
* @line_number: giver number of line
*/
void _div(stack_t **stack, unsigned int line_number)
{
	if (!((*stack) && (*stack)->next))
		error_div(stack, line_number);
	if ((*stack)->n == 0)
		error_math(stack, line_number);
	(*stack)->next->n /= (*stack)->n;
	pop(stack, line_number);
}
