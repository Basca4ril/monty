#include "monty.h"

/**
 * pint - prints a value on top of the stack
 * @stackLink: list
 * @lineN: line number
 */
void pint(stack_t **stackLink, unsigned int lineN)
{
	if (*stackLink == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", lineN);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stackLink)->n);
}
