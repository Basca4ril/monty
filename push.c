#include "monty.h"

/**
 * push - pushes an element to the stack
 * @stackLink: Pointer to list
 * @num: Line number incase of error
 */
void push(stack_t **stackLink, int num)
{
	stack_t *newNode = malloc(sizeof(stack_t));

	if (newNode == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	newNode->n = num;
	newNode->prev = NULL;
	newNode->next = *stackLink;

	if (*stackLink != NULL)
	{
		(*stackLink)->prev = newNode;
	}

	*stackLink = newNode;
}
