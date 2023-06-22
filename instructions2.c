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
