#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE 200809L

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

extern stack_t *stackLink;

void pint(stack_t **stackLink, unsigned int lineN);
void push(stack_t **stackLink, int num);
void pall(stack_t **stackLink, unsigned int lineN);
void executor(char *opcode, unsigned int lineN);
void pop(stack_t **stackLink, unsigned int lineN);
void swap(stack_t **stackLink, unsigned int lineN);
void add(stack_t **stackLink, unsigned int lineN);
void nop(stack_t **stackLink, unsigned int lineN);
void sub(stack_t **stackLink, unsigned int lineN);
void divid(stack_t **stackLink, unsigned int lineN);
void mul(stack_t **stackLink, unsigned int lineN);
void mod(stack_t **stackLink, unsigned int lineN);
void pchar(stack_t **stackLink, unsigned int lineN);
void pstr(stack_t **stackLink, unsigned int lineN);
void rotl(stack_t **stackLink, unsigned int lineN);

#endif /*MONTY_H*/
