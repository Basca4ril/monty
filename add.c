#include "monty.h"

/**
 * add - add topmost elements
 * @stackLink: list
 * @lineN: line Number
 */
void add(stack_t **stackLink, unsigned int lineN)
{
	stack_t *num1, *num2;

	if (*stackLink == NULL || (*stackLink)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", lineN);
		exit(EXIT_FAILURE);
	}
	num1 = *stackLink;
	num2 = num1->next;
	num2->n += num1->n;
	*stackLink = num2;

	free(num1);
}
