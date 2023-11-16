#include "monty.h"

/**
 * rotl - rotates stack
 * @stackLink: list
 * @lineN: line number
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *num1, *num2;

	(void)lineN;

	if (*stackLink == NULL || (*stackLink)->next == NULL)
		return;

	num1 = *stackLink;
	num2 = *stackLink;

	while (num2->next != NULL)
		num2 = num2->next;

	*stackLink = num1->next;
	(*stackLink)->prev = NULL;
	num1->next = NULL;
	num2->next = num1;
	num1->prev = num2;
}
