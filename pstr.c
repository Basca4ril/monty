#include "monty.h"

/**
 * pstr - prints string starting with top element
 * @stackLink: list
 * @lineN: line Number
 */
void pstr(stack_t **stackLink, unsigned int lineN)
{
	stack_t *curr = *stackLink;
	(void)lineN;

	while (curr != NULL&& curr->n != 0 && curr->n >= 0 && curr->n <= 127)
	{
		putchar(curr->n);
		curr = curr->next;
	}
	putchar(10);
}
