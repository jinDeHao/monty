#include "monty.h"

/**
 * queue - change the type of storing to queue.
 * @stack: pointer to stack
 * @line_number: giver number of line
*/
void queue(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	var1.type = "queue";
}

/**
 * stack - change the type of storing to stack.
 * @stack: pointer to stack
 * @line_number: giver number of line
*/
void stack(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	var1.type = "stack";
}
