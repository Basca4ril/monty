#include "monty.h"

/**
 * mod - mods the topmost element
 * @stackLink: list
 * @lineN: line number
 */
void mod(stack_t **stackLink, unsigned int lineN)
{
	stack_t *num1, *num2;

	if (*stackLink == NULL || (*stackLink)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", lineN);
		exit(EXIT_FAILURE);
	}

	num1 = *stackLink;
	num2 = num1->next;

	if (num1->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", lineN);
		exit(EXIT_FAILURE);
	}
	num2->n %= num1->n;
	*stackLink = num2;
	
	free(num1);
}
