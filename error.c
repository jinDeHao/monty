#include "omarstack.h"

void error_push(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_num);
	fclose(var1.file_read);
	free_dlistint(*stack);
	exit(EXIT_FAILURE);
}

void error_unknown(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", line_num, var1.line_read);
	fclose(var1.file_read);
	free_dlistint(*stack);
	exit(EXIT_FAILURE);
}

void error_pint(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_num);
	fclose(var1.file_read);
	free_dlistint(*stack);
	exit(EXIT_FAILURE);
}


void error_pop(stack_t **stack, unsigned int line_num)
{
	(void)**stack;

	fprintf(stderr, "L%d: can't pop an empty stack\n", line_num);
	fclose(var1.file_read);
	exit(EXIT_FAILURE);
}

void error_swap(stack_t **stack, unsigned int line_num)
{
	fprintf(stderr, "L%d: can't swap, stack too short\n", line_num);
	fclose(var1.file_read);
	free_dlistint(*stack);
	exit(EXIT_FAILURE);
}