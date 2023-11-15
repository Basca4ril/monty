#include "monty.h"

/**
 * pall - prints all values on the stack
 * @stackLink: list
 * @lineN: Line number in case of error
 */
void pall(stack_t **stackLink, unsigned int lineN)
{
	stack_t *curr = *stackLink;

	(void)lineN;

	while(curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
	}
}
