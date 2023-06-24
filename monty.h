#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <dirent.h>

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0
#define MAX_LENGTH 256

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
		int n;
		struct stack_s *prev;
		struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
		char *opcode;
		void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/**
 * struct omarvar - global variabels
 * @val_read: the value readed
 * @line_read: the line readed
 * @file_read: the stream of the file readed
 * @type: define type of storing set stack as default
 * Description: the global variables that we used
 */
typedef struct omarvar
{
	int val_read;
	char *line_read;
	FILE *file_read;
	char *type;
} glob;

extern glob var1;


stack_t *pushstack(stack_t **head, int n);
stack_t *pushqueue(stack_t **head, int n);
void error_memory(stack_t **stack, unsigned int line_num);

void free_dlistint(stack_t *head);

void getinstruction(instruction_t *instructions);

void push(stack_t **stack, unsigned int line_number);
void error_push(stack_t **stack, unsigned int line_num);

void pall(stack_t **stack, unsigned int line_number);
void error_unknown(stack_t **stack, unsigned int line_num);

void pint(stack_t **stack, unsigned int line_number);
void error_pint(stack_t **stack, unsigned int line_num);

void pop(stack_t **stack, unsigned int line_number);
void error_pop(stack_t **stack, unsigned int line_num);

void swap(stack_t **stack, unsigned int line_number);
void error_swap(stack_t **stack, unsigned int line_num);

void add(stack_t **stack, unsigned int line_number);
void error_add(stack_t **stack, unsigned int line_num);

void nop(stack_t **stack, unsigned int line_number);

void sub(stack_t **stack, unsigned int line_number);
void error_sub(stack_t **stack, unsigned int line_num);

void _div(stack_t **stack, unsigned int line_number);
void error_div(stack_t **stack, unsigned int line_num);

void mul(stack_t **stack, unsigned int line_number);
void error_mul(stack_t **stack, unsigned int line_num);

void mod(stack_t **stack, unsigned int line_number);
void error_mod(stack_t **stack, unsigned int line_num);

void error_math(stack_t **stack, unsigned int line_num);

void pchar(stack_t **stack, unsigned int line_number);
void error_pchar_empty(stack_t **stack, unsigned int line_num);
void error_not_char(stack_t **stack, unsigned int line_num);

void pstr(stack_t **stack, unsigned int line_number);

void rotl(stack_t **stack, unsigned int line_number);

void rotr(stack_t **stack, unsigned int line_number);

void queue(stack_t **stack, unsigned int line_number);
void stack(stack_t **stack, unsigned int line_number);

int _isdigit(int c);
int isinteger(char *str);
char *ignore_spaces(char *old_line);


#endif
