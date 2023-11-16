#include "monty.h"

/**
 * rotr - rotates stack to the right
 * @stackLink: list
 * @lineN: line number
 */
void rotr(stack_t **stackLink, unsigned int lineN)
{
	stack_t *num1, *num2;

	(void)lineN;

	if (*stackLink == NULL || (*stackLink)->next == NULL)
		return;

	num1 = *stackLink;
	num2 = *stackLink;

	while (num2->next != NULL)
		num2 = num2->next;

	num2->prev->next = NULL;
	num2->prev = NULL;
	num2->next = num1;
	num1->prev = num2;

	*stackLink = num2;
}
