#include "monty.h"

void error_add(stack_t **stack, unsigned int line_num)
{
    fprintf(stderr, "L%d: can't add, stack too short\n", line_num);
	fclose(var1.file_read);
	free_dlistint(*stack);
	exit(EXIT_FAILURE);
}


void error_sub(stack_t **stack, unsigned int line_num)
{
    fprintf(stderr, "L%d: can't sub, stack too short\n", line_num);
	fclose(var1.file_read);
	free_dlistint(*stack);
	exit(EXIT_FAILURE);
}