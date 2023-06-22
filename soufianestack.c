#include "monty.h"

glob var1;

int main(int argc, char *argv[])
{
	instruction_t instructions[] = {
        {"push", push},
        {"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{"sub", sub},
		{"div", _div},
		{"mul", mul},
		{"mod", mod},
		{NULL, NULL}
    };

	if (argc != 2)
	{
		write(STDERR_FILENO, "USAGE: monty file\n", 18);
		return(EXIT_FAILURE);
	}
	var1.file_read = fopen(argv[1], "r");
	if (!var1.file_read)
	{
		fprintf(stderr, "USAGE: can't open file %s\n", argv[1]);
		return(EXIT_FAILURE);
	}
	getinstruction(instructions);
	return (EXIT_SUCCESS);
}


void getinstruction(instruction_t *instructions)
{
	unsigned int nline = 1, i;
	char *inst = NULL, line[MAX_LENGTH];
	stack_t *stack = NULL;

	while (fgets(line, MAX_LENGTH, var1.file_read))
	{
		line[strcspn(line, "\n")] = '\0';
		var1.line_read = ignore_spaces(line);
		if(*var1.line_read != '\0' && *var1.line_read != '#')
		{
			inst = strtok(var1.line_read, " ");
			i = 0;
			while (instructions[i].opcode)
			{
				if (!(strcmp(inst, instructions[i].opcode)))
				{
					instructions[i].f(&stack, nline);
					break;
				}
				i++;
			}
			if (!instructions[i].opcode)
				error_unknown(&stack, nline);
		}
		nline++;
	}
	fclose(var1.file_read);
	free_dlistint(stack);
}

/**
 * ignore_spaces - ignore surrounded spaces in command
 * @old_line: command line
 * Return: command line after remove spaces
*/
char *ignore_spaces(char *old_line)
{
	char *end_line, *new_line = old_line;

	while (*new_line == ' ')
		new_line++;
	end_line = new_line + (strlen(new_line) - 1);
	while (end_line > new_line && *end_line == ' ')
		end_line--;
	*(end_line + 1) = '\0';
	return (new_line);
}