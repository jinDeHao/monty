#include "monty.h"

/**
* error_add - that exit with error
* @stack: pointer to stack
* @line_num: giver number of line
*/
void error_add(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't add, stack too short\n", line_num);
	fclose(var1.file_read);
	free_dlistint(*stack);
	exit(EXIT_FAILURE);
}

/**
* error_sub - that exit with error
* @stack: pointer to stack
* @line_num: giver number of line
*/
void error_sub(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't sub, stack too short\n", line_num);
	fclose(var1.file_read);
	free_dlistint(*stack);
	exit(EXIT_FAILURE);
}

/**
* error_mul - that exit with error
* @stack: pointer to stack
* @line_num: giver number of line
*/
void error_mul(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't mul, stack too short\n", line_num);
	fclose(var1.file_read);
	free_dlistint(*stack);
	exit(EXIT_FAILURE);
}

/**
* error_div - that exit with error
* @stack: pointer to stack
* @line_num: giver number of line
*/
void error_div(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't div, stack too short\n", line_num);
	fclose(var1.file_read);
	free_dlistint(*stack);
	exit(EXIT_FAILURE);
}

/**
* error_mod - that exit with error
* @stack: pointer to stack
* @line_num: giver number of line
*/
void error_mod(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: can't mod, stack too short\n", line_num);
	fclose(var1.file_read);
	free_dlistint(*stack);
	exit(EXIT_FAILURE);
}
