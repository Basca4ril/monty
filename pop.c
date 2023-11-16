#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @stackLink: list
 * @lineN: line number
 */
void pop(stack_t **stackLink, unsigned int lineN)
{
	stack_t *temp;
	if (*stackLink == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", lineN);
		exit(EXIT_FAILURE);
	}

	temp = *stackLink;
	*stackLink = temp->next;
	if (*stackLink)
		(*stackLink)->prev = NULL;

	free(temp);
}
