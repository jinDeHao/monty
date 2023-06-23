#include "monty.h"
/**
* error_push - that exit with error
* @stack: pointer to stack
* @line_num: giver number of line
*/
void error_push(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_num);
	free_dlistint(*stack);
	fclose(var1.file_read);
	exit(EXIT_FAILURE);
}

/**
* error_unknown - that exit with error
* @stack: pointer to stack
* @line_num: giver number of line
*/
void error_unknown(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line_num, var1.line_read);
	free_dlistint(*stack);
	fclose(var1.file_read);
	exit(EXIT_FAILURE);
}

/**
* error_pint - that exit with error
* @stack: pointer to stack
* @line_num: giver number of line
*/
void error_pint(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
	free_dlistint(*stack);
	fclose(var1.file_read);
	exit(EXIT_FAILURE);
}

/**
* error_pop - that exit with error
* @stack: pointer to stack
* @line_num: giver number of line
*/
void error_pop(stack_t **stack, unsigned int line_num)
{
	(void)**stack;

	fprintf(stderr, "L%u: can't pop an empty stack\n", line_num);
	fclose(var1.file_read);
	exit(EXIT_FAILURE);
}

/**
* error_swap - that exit with error
* @stack: pointer to stack
* @line_num: giver number of line
*/
void error_swap(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't swap, stack too short\n", line_num);
	free_dlistint(*stack);
	fclose(var1.file_read);
	exit(EXIT_FAILURE);
}
