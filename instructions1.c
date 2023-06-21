#include "omarstack.h"

void add(stack_t **stack, unsigned int line_number)
{
	if (!((*stack) && (*stack)->next))
		error_add(stack, line_number);
	(*stack)->next->n += (*stack)->n;
	pop(stack, line_number);
}


void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}


void sub(stack_t **stack, unsigned int line_number)
{
	if (!((*stack) && (*stack)->next))
		error_add(stack, line_number);
	(*stack)->next->n -= (*stack)->n;
	pop(stack, line_number);
}

