#include "monty.h"

/**
 * pchar - prints character on top of the stack
 * @stackLink: list
 * @lineN: line number
 */
void pchar(stack_t **stackLink, unsigned int lineN)
{
	int num;

	if (*stackLink == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", lineN);
		exit(EXIT_FAILURE);
	}
	num = (*stackLink)->n;

	if (num < 0 || num > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", lineN);
		exit(EXIT_FAILURE);
	}

	putchar(num);
	putchar('\n');
}
