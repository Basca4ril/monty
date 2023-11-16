#include "monty.h"

/**
 * swap - swaps elements
 * @stackLink: list
 * @lineN: line number
 */
void swap(stack_t **stackLink, unsigned int lineN)
{
	stack_t *num1, *num2;

	if (*stackLink == NULL || (*stackLink)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", lineN);
		exit(EXIT_FAILURE);
	}

	num1 = *stackLink;
	num2 = num1->next;

	num1->next = num2->next;
	num1->prev = num2;
	num2->next = num1;
	num2->prev = NULL;

	*stackLink = num2;
}
