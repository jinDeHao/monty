#include "monty.h"

/**
* error_math - that exit with error
* @stack: pointer to stack
* @line_num: giver number of line
*/
void error_math(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: division by zero\n", line_num);
	fclose(var1.file_read);
	free_dlistint(*stack);
	exit(EXIT_FAILURE);
}

/**
* error_pchar_empty - that exit with error
* @stack: pointer to stack
* @line_num: giver number of line
*/
void error_pchar_empty(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't pchar, stack empty\n", line_num);
	fclose(var1.file_read);
	free_dlistint(*stack);
	exit(EXIT_FAILURE);
}

/**
* error_not_char - that exit with error
* @stack: pointer to stack
* @line_num: giver number of line
*/
void error_not_char(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't pchar, value out of range\n", line_num);
	fclose(var1.file_read);
	free_dlistint(*stack);
	exit(EXIT_FAILURE);
}
